#include "../include/timer.h"



int generate_pulse_using_timer0(int freq, bit output_pin)
{
static int t2;
 T2MOD = T2OE_;			/* configure Timer 2 for output pin through P1.1*/
 T2CON = 0x00;
 t2 = calc_t2reg_value (freq); /* generate a pulse of given */
 RCAP2L = T2_FREQ_REG_LOW;
 RCAP2H	= T2_FREQ_REG_HIGH;
 TR2 = 1;
}