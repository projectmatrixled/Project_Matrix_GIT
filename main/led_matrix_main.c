// 32x16 matrix LED display as 32 Columns and 16 Rows
// This is  test program to know if all the [32 * 16 = 512 ] LEDs are glowing
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Edited on : 16/08/2013
// Developed by : Sivalingam / Kumaraguru
// Reviwed by : Kumaraguru
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	


#include "..\include\header.h"
#include "..\config\app_config.h"

void main ()
{
int column_number;
while(1)
{
	for(column_number=1;column_number<=32;column_number++ )
	{
		write_column(column_number);
		write_row(0xFF);
		delay_us(50);
	}
}
}

