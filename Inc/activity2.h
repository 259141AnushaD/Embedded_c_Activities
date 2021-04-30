#ifndef _ACTIVITY2_
#define _ACTIVITY2_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

void InitAdc();
uint16_t ReadAdc(uint8_t ch);
void activity_2();

#endif
