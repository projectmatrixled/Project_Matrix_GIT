#ifndef __app_config_h
#define __app_config_h

/* configure the application specific device */

#define LED_DISPLAY_ENABLED TRUE


/* Include device driver file */
#if (LED_DISPLAY_ENABLED == TRUE )

#include "..\source\led_driver.c"


#endif


#endif
