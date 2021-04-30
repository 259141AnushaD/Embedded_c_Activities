#include "activity1.h"
#include <util/delay.h>

void pin_init(){
    DDRB |= (1<<LED_PIN); // set pin for LED
    DDRD &= ~(1<<HEATER_PIN); // clear bit
    DDRC &= ~(1<<DRIVER_PIN); // clear bit

    PORTD |= (1<<HEATER_PIN); // set bit
    PORTC |= (1<<DRIVER_PIN); // set bit
}

void activity1_loop(){
    if (!((PIND & (1<<HEATER_PIN)) || (PINC & (1<<DRIVER_PIN)))){
        LED_PORT |= (1<<LED_PIN); // switch ON LED
        _delay_ms(200);
    }
    else{
        LED_PORT &= ~(1<<LED_PIN);
        _delay_ms(200);
}
}

void activity_1(){
    pin_init();
}
