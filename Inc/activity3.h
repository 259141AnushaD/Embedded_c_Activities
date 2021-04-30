#ifndef _ACTIVITY3_
#define _ACTIVITY3_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

#define OUT_PIN (PB1) // pin for timer 1

void activity_3();
void InitPwm();
char activity3_loop (uint16_t var);

#endif
