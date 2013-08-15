#include "config\LCD_config.h"

void lcd_init()
{
  output_bit(LCD_RS,0);//rs Command
  delay_ms(10);
  lcd_write(0x01);
  delay_ms(10);
  lcd_write(0x38);//16*2
  lcd_write(0x06);
  lcd_write(0x0f);
  lcd_write(0x80);//cursor first position
  delay_ms(100);
  output_bit(LCD_RS,1);// rs  Data
}

void clr_lcd()
{
output_bit(LCD_RS,0);
delay_ms(10);
lcd_write(0x01);
output_bit(LCD_RS,1);
delay_ms(1);
}//end of clr lcd

void lcd_newline()
{
output_bit(LCD_RS,0);
delay_ms(10);
lcd_write(0xc0);
output_bit(LCD_RS,1);
delay_ms(1);
}//end of lcd newline

void lcd_write(char data)
{
output_b(data);
delay_ms(1);
output_bit(LCD_EN,1);
delay_ms(3);
output_bit(LCD_EN,0);
delay_ms(1);
}//end of lcd write



