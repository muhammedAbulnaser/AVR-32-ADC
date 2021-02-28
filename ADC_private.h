/*
 * ADC_private.h
 *
 *  Created on: Sep 7, 2018
 *  Author: Abdulnaser
 */

#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

/*ADMUX register bits*/

#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define MUX4    4
#define MUX3    3
#define MUX2    2
#define MUX1    1
#define MUX0    0

/*ADCSRA register bits*/

#define ADEN   7
#define ADSC   6
#define ADATE  5
#define ADIF   4
#define ADIE   3
#define ADPS2  2
#define ADPS1  1
#define ADPS0  0

/* ADC reference voltage */

#define ADC_VCC       1
#define ADC_INT_VREF  3
#define ADC_VREF_OFF  0

/* ADC Adjustment Configs */
#define ADC_u8LEFT   0
#define ADC_u8RIGHT  1

#define ADC_TRIG_DISABLE  0
#define ADC_TRIG_ENABLE   1


/* ADC register address*/
#define ADC_u8ADCSRA   *((volatile u8*)(0x26))
#define ADC_u16ADC   *((volatile u16*)(0x24))
#define ADC_u8ADMUX   *((volatile u8*)(0x27))

#endif /* ADC_PRIVATE_H_ */
