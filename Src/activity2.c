#include "activity2.h"
#include "activity1.h"
#include <util/delay.h>

void InitAdc(){
    ADMUX = (1<<REFS0);
    ADCSRA = (1<<ADEN) | (7<<ADPS0);
}

uint16_t ReadAdc(uint8_t ch){
    ADMUX &= 0Xf8;
    ch &= 0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1<<ADSC);
    while(!(ADCSRA&(1<<ADIF)));
        ADCSRA |= (1<<ADIF);
        return(ADC);
        }

void activity_2(){
    InitAdc();
}
    


