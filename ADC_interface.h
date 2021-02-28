/*
 * ADC_interface.h
 *
 *  Created on: Sep 7, 2018
 *      Author: Abdulnaser
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

/***********************************************************************************************
 *                              public definitions
 ***********************************************************************************************/

/* ADC channels*/

#define ADC_u8CH0     0
#define ADC_u8CH1     1
#define ADC_u8CH2     2
#define ADC_u8CH3     3
#define ADC_u8CH4     4
#define ADC_u8CH5     5
#define ADC_u8CH6     6
#define ADC_u8CH7     7




/***********************************************************************************************
                               public functions
 **********************************************************************************************/
/*initialization function*/

void ADC_VidInit(void);

/*Read one specific channel one shot*/
u16 ADC_u16ReadChannel (u8 u8ChIdCpy);

/*Enable ADC*/

/*Disable ADC*/




#endif /* ADC_INTERFACE_H_ */
