#include <util/delay.h>

#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void InitUart(uint16_t ubrr_value)

{
    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8) & (0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char UartReadchar(){
    while(!(UCSR0A & (1<<RXC0))){
        //DO NOTHING
    }
    return UDR0;
}

void UartWrite(char data){
   while(!(UCSR0A & (1<<UDRE0))){
       //DO NOTHING
   }
   UDR0=data;
}

void activity_4(){
    InitUart (103);
    while(1)
    {
        activity1_loop();
        uint16_t data = 0;
        data = ReadAdc(0);
        _delay_ms(200);
        activity3_loop(data);

    }
}
