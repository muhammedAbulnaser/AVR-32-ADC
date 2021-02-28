/*
 * ADC_config.h
 *
 *  Created on: Sep 7, 2018
 *      Author: Abdulnaser
 */

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

/*Reference voltage selection
 Range: ADC_VCC,ADC_INT_VREF,ADC_VREF_OFF   */

#define ADC_u8VREF       ADC_VCC

/*result adjustments config
 * Range: ADC__u8RIGHT,ADC_u8LEFT*/
#define ADC_u8RES_ADJUST    ADC_u8LEFT

/*Auto Triggering state */
/* Range:ADC_TRIG*/

#define ADCAUTORIG       ADC_TRIG_DISABLE

#endif /* ADC_CONFIG_H_ */
