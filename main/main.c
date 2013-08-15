#include "..\include\Header.h"
#include "..\config\APP_config.h"

enum conditions
{
START,STOP,RUN
};

enum conditions state=START;

void main()
{
int i,ON=1;
delay_ms(1000);
output_bit(LCD_RW,0);//Write
lcd_init();
delay_ms(1000);

while(1)
    {
     switch(state)
     {
      case START :

          state=RUN;
          break;

      case RUN :

          if(ON==1)
           {
             clr_lcd();
             sprintf(DISP," <<STARTED..>> ");
             for(i=0;Disp[i]!='\0';i++)
              {
               putc(disp[i]);
               lcd_write(Disp[i]);
               delay_ms(100);
              }
              printf("\n");
              delay_ms(1000);
              break;
           }
          else
             state=STOP;
             break;

       case STOP :

            clr_lcd();
            break;

     }
    }//while(1);
  }


