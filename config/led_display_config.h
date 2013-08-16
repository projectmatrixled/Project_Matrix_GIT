#ifndef __led_display_config_h
#define __led_display_config_h

#define DISPLAY SIZE 32X16

#define ENABLE_MUX FALSE
#define DISABLE_MUX TRUE

#define NO_OF_ROW 16
#define NO_OF_COL 32

/* MUX1 controls 1 to 16 column */
sbit MUX1_EN = P0^0;
#define MUX1_DATA P3


/* MUX2 controls 17 to 32 column */
sbit MUX2_EN = P0^1;
#define MUX2_DATA P3

/* ROW 1-16 */
#define ROW_SET1 P2   	/*Row 1 - Row 8*/
#define ROW_SET2 P1		/*Row 9 - Row 16*/



void write_column(int column_number);
void write_row(int row_number);

#endif