#ifndef _ACTIVITY1_
#define _ACTIVITY1_

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#define LED_PORT (PORTB) // led port number
#define LED_PIN (PB0) // led pin number
#define DRIVER_PIN (PC6) // to check whether the driver is seated
#define HEATER_PIN (PD4) // to check whether the heater is turned on

#include <avr/io.h>

void pin_init();
void activity1_loop();
void activity_1();

#endif
© 2021 GitHub, Inc.
