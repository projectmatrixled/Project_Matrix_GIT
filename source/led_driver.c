
# include "..\config\led_display_config.h"

#if (LED_DISPLAY_ENABLED == TRUE )
void write_column(int column_number)
{
 if(column_number)
  { 
	  if (column_number >16)
	    {
			MUX1_EN = DISABLE_MUX;
			MUX2_EN = ENABLE_MUX;			
			MUX2_DATA = column_number-1;
		}
	  else
	    {
			MUX2_EN = DISABLE_MUX;
			MUX1_EN = ENABLE_MUX;			
			MUX1_DATA = column_number-1;
		}
  }

}
 
void write_row(unsigned int row_data)
{
ROW_SET1 = row_data;   
ROW_SET2 = row_data;   
}


#endif