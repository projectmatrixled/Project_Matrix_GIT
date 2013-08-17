/* file for creating delay */
#include "../include/delay.h"

void delay_us(unsigned long int us)	   	// Delay function
	{
	  unsigned long int i;
	  for (i=0; i<us; i++);
	}
