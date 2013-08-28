
# include "..\config\led_display_config.h"

#define  SHCP 	SHIFT_REG_SHIFTING_CLOCK
#define  STCP 	SHIFT_REG_STORAGE_CLOCK
#define  DS 	SHIFT_REG_SERIAL_DATA

#if (LED_DISPLAY_ENABLED == TRUE )


 /*Funtion for the row number*/
 void row_number(int row)
  {
    int i;
	if(row<=8)
	     {
			COUNTER1_RST = HIGH;	
		    COUNTER1_RST = LOW;	
			COUNTER1_CLK_ENABLE=LOW; 
								
		    for(i=0; i<row; i++)
   			   {
				COUNTER_CLK = LOW;
				COUNTER_CLK = HIGH;	
			//	delay_us(1);	
			   }	
			    COUNTER1_CLK_ENABLE=HIGH ;				 	  		  
			//	delay_us(1);
	      }
	  else 
	     {
			COUNTER2_RST = HIGH;	
		    COUNTER2_RST = LOW;	
			COUNTER2_CLK_ENABLE=LOW; 
								
		    for(i=8; i<row; i++)
   			   {
				COUNTER_CLK = LOW;
				COUNTER_CLK = HIGH;		
			   }	
			    COUNTER2_CLK_ENABLE=HIGH ;				 	  		  
	      }
  }	
  
  			 
 /*Function for the column number*/
void column_number(int value)
 {
 
   unsigned short Mask =0x01,Flag,l,temp;

   temp = 0x01 << (value-1);

   for (l=0; l<32 ; l++)
	 {
      Flag = temp & Mask;
	  if(Flag==0){ DS = LOW;}
      else { DS = HIGH;}
	  
	  SHCP = HIGH;
      SHCP = LOW;
      Mask = Mask << 1 ;
     }
      STCP = HIGH;
      STCP = LOW;
 }		



#endif