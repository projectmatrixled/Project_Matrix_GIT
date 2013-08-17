/* header file for using timer  */
#ifndef __timer_h
#define __timer_h

/*When using timer 2 the following func is used to find the value of  T2_FREQ_REG_LOW , T2_FREQ_REG_HIGH */
/* T2_FREQ_REG_HIGH, T2_FREQ_REG_LOW  = 65536 - [FOSC]		  											 */
/*                                             -----------												 */
/*											 4 x Desired freq											 */

/* configuration for generating pulse using the Timer 2 and get in o/p P1.0 */
#define DESIRED_FREQ   400		/* in hertz */

#define calc_t2reg_value(x)	(65536 - (FOSC / (4 * x)))

#define T2_FREQ_REG_LOW   0xFB
#define T2_FREQ_REG_HIGH  0xF1

/* function prototypes */
int generate_pulse_using_timer0(int , bit ); 		/*generate PWM 50 % duty cycle using timer 0 */


#endif
