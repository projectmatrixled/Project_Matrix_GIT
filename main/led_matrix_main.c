// 32x16 matrix LED display as 32 Columns and 16 Rows
// This is  test program to know if all the [32 * 16 = 512 ] LEDs are glowing
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Edited on : 16/08/2013
// Developed by : Sivalingam / Kumaraguru
// Reviwed by : Kumaraguru
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^	


#include "..\include\header.h"
#include "..\config\app_config.h"

/* Different states provided for the microcontroller */
typedef enum
{
  INITIALISE,
  TEST_LED,
  DISPLAY_TEXT,
  GET_INPUT,
  END_APPLICATION
}st;


st STATUS = INITIALISE;

void main ()
{
//unsigned int row_number;
while(1)
  {	
  switch(STATUS)
	{
	    case INITIALISE:
					/* This calls all the required intialisation for the application*/
		                   STATUS = TEST_LED;
						   break;
		case TEST_LED:
					 /* This is a test program which turns on all the LEDS in the display  */
				{
					write_row(8);
				}	
						STATUS = TEST_LED;
						break;

	   	case DISPLAY_TEXT:
						/* The data from memeory is displayed in the memory*/  
	   					break;

		case GET_INPUT :
						/* get the input from keypad and print temperarily on LCD*/
						/* when the entered data is set, store it in the memory	   */
						break;
		
		case END_APPLICATION:
						/* run this when power is turned off  */
						break;

	 	default :
						break;
	 }
	}
}	   

