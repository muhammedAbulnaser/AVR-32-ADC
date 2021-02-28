/*
 * ADC_prog.c
 *
 *  Created on: Sep 7, 2018
 *      Author: Abdulnaser
 */

#include"std_types.h"
#include"util.h"

#include"ADC_interface.h"
#include"ADC_private.h"
#include"ADC_config.h"

void ADC_VidInit(void)
{
	//adjust Vref and result adjustment
	ADC_u8ADMUX  = (ADC_u8VREF<<REFS0)  |  (ADC_u8RES_ADJUST<<ADLAR) ;
	// enable ADC,Enable frequency prescaler
	ADC_u8ADCSRA = (1<<ADEN) | (1<<ADPS2)  | (1<<ADPS1)  |  (ADPS0) ;
}


u16 ADC_u16ReadChannel(u8 u8ChIdCpy)
{
	// make sure that channel index is within 7 ADC channel

	u8ChIdCpy = u8ChIdCpy & 0b00000111 ;
	// clear the 3 bottom bits before selecting the ADC channel;

	ADC_u8ADMUX =(ADC_u8ADMUX & 0xF8) | u8ChIdCpy;

	// start conversion

	ADC_u8ADCSRA  |= (1<<ADSC);

	while(!(ADC_u8ADCSRA & (1<<ADIF)));


	return ADC_u16ADC;



}
