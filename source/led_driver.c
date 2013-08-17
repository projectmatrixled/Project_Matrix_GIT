
# include "..\config\led_display_config.h"

#define  SHCP 	SHIFT_REG_SHIFTING_CLOCK
#define  STCP 	SHIFT_REG_STORAGE_CLOCK
#define  DS 	SHIFT_REG_SERIAL_DATA

#if (LED_DISPLAY_ENABLED == TRUE )
//void write_column(unsigned int column_number)
//{
// if(column_number)
//  { 
//	  if (column_number >16)
//	    {
//			MUX1_EN = DISABLE_MUX;
//			MUX2_EN = ENABLE_MUX;			
//			MUX2_DATA = column_number-1;
//		}
//	  else
//	    {
//			MUX2_EN = DISABLE_MUX;
//			MUX1_EN = ENABLE_MUX;			
//			MUX1_DATA = column_number-1;
//		}
//  }
//
//}
// 
//void write_row(unsigned int row_data)
//{
//ROW_SET1 = row_data;   
//ROW_SET2 = row_data;   
//}

void write_row(unsigned int row_number)
{
  if(row_number<=3)
   {
	COUNTER1_RST = LOW;
	COUNTER2_RST = LOW;
	COUNTER_CLK =LOW;
	delay_us(5);
	COUNTER_CLK =HIGH;
   }
   else
   {
    COUNTER1_RST = HIGH;
	COUNTER2_RST = HIGH;
   }

   
 }

void write_column(unsigned char led_data)
{
DS = led_data;
SHCP = LOW;
	delay_us(5);
SHCP = HIGH;
STCP = LOW;
	delay_us(5);
STCP = HIGH;


}
#endif