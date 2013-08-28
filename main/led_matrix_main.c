// 32x16 matrix LED display as 32 Columns and 16 Rows
// This is the program for select the Row and column to turn on the particular LED
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Edited on : 26/08/2013
// Developed by : Sivalingam 
// Reviwed by : Senthilkumar
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
} st;


st STATUS = INITIALISE;

void main ()
{
 delay_us(1000);
 
 row_number(1);	   // Enter the Row number from 1 to 16 which u want to Glow 
 delay_us(1);

while(1)
  { 
 
  switch(STATUS)
	{
	    case INITIALISE:
					/* This calls all the required intialisation for the application*/
		                   STATUS = TEST_LED;
						   break;
		case TEST_LED:
					 /* his is the program for select the Row and column to turn on the particular LED  */
				{				   
				   column_number(16);	 // Enter the Column number from 1 to 16 which u want to Glow 
				   delay_us(1);	
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

