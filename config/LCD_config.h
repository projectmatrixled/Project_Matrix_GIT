#ifndef __lcd_config_h

#define __lcd_config_h

#define LCD_RS pin_E0
#define LCD_RW pin_E1
#define LCD_EN pin_E2

// LCD -> R/S  R/W  EN  D0   D1  D2  D3  D4  D5  D6  D7
// PIN -> RE0  RE1  RE2 Rb0  Rb1 Rb2 Rb3 Rb4 Rb5 Rb6 Rb7

void lcd_write(char data);
void lcd_init();
void lcd_newline();
void clr_lcd();
char Disp[45];

#endif
