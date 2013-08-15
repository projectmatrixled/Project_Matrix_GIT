
#ifndef __APP_config

#define __APP_config


/* configure application specific driver */
#define LCD_DRIVER_ENABLED TRUE
#define RELAY_DRIVER_ENABLED FALSE


/* include driver files */

#if (LCD_DRIVER_ENABLED == TRUE)
#include "source\lcd_driver.c"
#endif

#if (RELAY_DRIVER_ENABLED == TRUE)
#include "relay_driver.c"
#endif

#endif

