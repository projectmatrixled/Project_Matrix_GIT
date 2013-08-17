#ifndef __led_display_config_h
#define __led_display_config_h

#define DISPLAY SIZE 32X16

#define ENABLE_MUX FALSE
#define DISABLE_MUX TRUE

#define NO_OF_ROW 16
#define NO_OF_COL 16


/* Design of LED panel */
/*		 |------> clk------------------>4017 ------> ULN 2803 ---->Row x Column 			*/
/*	 	 |------> 4017_rest--------------|								   |				*/
/*		 |------> serial_data ---------------------------------------->Shift register		*/
/*	8052 -------> storg_clk	------------------------------------------>   74HC595			*/
/*       |------> shift_clk ------------------------------------------>          			*/


/* configuration for 1 to 8 column */
sbit SHIFT_REG_SERIAL_DATA = P1^4;
sbit SHIFT_REG_SHIFTING_CLOCK = P1^1;
sbit SHIFT_REG_STORAGE_CLOCK = P1^2;


/* configuration for 9 to 16 column */


/* ROW cnfiguration for row 1-16 */
sbit COUNTER_CLK = P1^0;		/*	4017 clk pulse */
sbit COUNTER1_RST = P2^0;		/* 	4017 rst pin for Row 1 - 8*/
sbit COUNTER2_RST = P2^1;		/*  4017 rst pin for Row 9 - 16*/

void write_column(unsigned int column_number);
void write_row(unsigned int row_number);

#endif