#include <util/delay.h>

#include "activity3.h"
#include "activity2.h"
#include "activity1.h"
#include "activity4.h"

void InitPwm(){
    TCCR1A |= (1<<COM1A1) | (1<<WGM10) | (1<<WGM11); // timer1 for PWM
    TCCR1B |= (1<<WGM12) | (1<<CS11) | (1<<CS10); // setting prescalar value as 8
    DDRB |= (1<<OUT_PIN); // output pin
}

char activity3_loop (uint16_t var){
    char temp_value;

    if ((var>=0) && (var<=209)){
        OCR1A = 205; // 20% duty cycle
        temp_value = 20;
        _delay_ms(200);
        UartWrite(temp_value);
    }
    else if ((var>=210) && (var<=509)){
        OCR1A = 410; // 40% duty cycle
        temp_value = 25;
        _delay_ms(200);
        UartWrite(temp_value);
    }
    else if ((var>=510) && (var<=709)){
        OCR1A = 717; // 70% duty cycle
        temp_value = 29;
        _delay_ms(200);
        UartWrite(temp_value);
    }
    else if ((var>=710) && (var<=1024)){
        OCR1A = 973; // 95% duty cycle
        temp_value = 33;
        _delay_ms(200);
        UartWrite(temp_value);
    }
    else{
        OCR1A = 0; // 0% duty cycle
        temp_value = 0;
        UartWrite(temp_value);
    }
    return 0;
}

void activity_3(){
    InitPwm();
}
