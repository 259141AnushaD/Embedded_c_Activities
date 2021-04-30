#ifndef _ACTIVITY4_
#define _ACTIVITY4_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#include <avr/io.h>

void InitUart(uint16_t ubrr_value);
char UartReadchar();
void UartWrite(char data);
void activity_4();

#endif
