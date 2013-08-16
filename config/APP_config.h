
#ifndef __APP_config

#define __APP_config


/* configure application specific driver */
#define LCD_DRIVER_ENABLED FALSE
#define RELAY_DRIVER_ENABLED FALSE
#define LED_DISPLAY_ENABLED TRUE


/* include driver files */

#if (LCD_DRIVER_ENABLED == TRUE)
#include "..\source\lcd_driver.c"
#endif

#if (RELAY_DRIVER_ENABLED == TRUE)
#include "..\source\relay_driver.c"
#endif

#if (LED_DISPLAY_ENABLED == TRUE )

#include "..\source\led_driver.c"

#endif

endif
