
# include "..\config\led_display_config.h"

#define  SHCP 	SHIFT_REG_SHIFTING_CLOCK
#define  STCP 	SHIFT_REG_STORAGE_CLOCK
#define  DS 	SHIFT_REG_SERIAL_DATA

#if (LED_DISPLAY_ENABLED == TRUE )

void write_row(unsigned int row_number)
{
 int i;
 // if(row_number<=3)
  for(i=1;i<=row_number;i++)
   {
	COUNTER1_RST = LOW;
	COUNTER2_RST = LOW;
	COUNTER_CLK =LOW;
	delay_us(5);
	COUNTER_CLK =HIGH;
	//delay_us(5000);
   }
   //else
   {
    COUNTER1_RST = HIGH;
	COUNTER2_RST = HIGH; 
	delay_us(5);
   }

   
 }

/*void write_column(unsigned char led_data)
{
DS = led_data;
SHCP = LOW;
	delay_us(5);
SHCP = HIGH;
STCP = LOW;
	delay_us(5);
STCP = HIGH;


}	*/
#endif