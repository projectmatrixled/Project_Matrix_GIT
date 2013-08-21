
# include "..\config\led_display_config.h"
#include "..\source\CHAR_ARRAY.c"

#define  SHCP 	SHIFT_REG_SHIFTING_CLOCK
#define  STCP 	SHIFT_REG_STORAGE_CLOCK
#define  DS 	SHIFT_REG_SERIAL_DATA

#if (LED_DISPLAY_ENABLED == TRUE )

 void write_row(unsigned int row_number)
  {
   int i,k,j;

    for(k=0; k<1; k++)
	  {	
	    for(j=0; j<100; j++)
		  { 
		    COUNTER1_RST = LOW;
			COUNTER2_RST = LOW;
			COUNTER_CLK =HIGH;
			COUNTER_CLK =LOW;
				
		    for(i=1; i<=row_number; i++)
   			 {
			    write_column( Digit[k*8+(i-1)]);
				write_column(0x00);
				COUNTER_CLK =HIGH;
				COUNTER_CLK =LOW;
			   	delay_us(10);	
			 }				  
			    COUNTER1_RST = HIGH;
				COUNTER2_RST = HIGH; 
				delay_us(5);
  		   }

		 }
    }


 void write_column(unsigned int column_number)
  {
   unsigned int Mask =0x0001,Flag,l; 

   for (l=0; l<16; l++)
	{
     Flag = column_number & Mask; 
	  
     if(Flag==0) 
		  SHIFT_REG_SERIAL_DATA = LOW;
     else
   	     SHIFT_REG_SERIAL_DATA = HIGH;

         SHIFT_REG_SHIFTING_CLOCK = HIGH;
         SHIFT_REG_SHIFTING_CLOCK = LOW;
         Mask = Mask << 1;
      }
     SHIFT_REG_STORAGE_CLOCK = HIGH;
     SHIFT_REG_STORAGE_CLOCK = LOW;
   }	



#endif