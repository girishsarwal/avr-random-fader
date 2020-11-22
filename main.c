/*
 * main.c
 *
 *  Created on: 19-Dec-2019
 *      Author: girishsarwal
 */
unsigned int offTime = 0;

#include <avr/io.h>
#define F_CPU 100000UL	/** 1mhz clock **/
void main (void){
	PORTB = 0x00;
	DDRB = 0x01;
	TCCR0 |= (1 << CS00);
	TCNT0 = 0x00;
	while (1){

	}
	return;
}
