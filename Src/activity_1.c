#include<avr/io.h>
#include<util/delay.h>
#define LED PB0                 // Using PB2 for LED
#define SW1 PD0                 // Using PB0 for SW1
#define SW2 PD4                 // Using PB1 for SW2

int main(void)
{
    DDRB|=(1<<LED);             //Set PB2 as LED Indicator
    DDRD&=~(1<<SW1);            //Set SW1 as Switch_1 Input;
    DDRD&=~(1<<SW2);            //Set SW2 as Switch_2 Input;
    PORTD|=(1<<SW1);            //Set SW1 as Internal Pull Up;
    PORTD|=(1<<SW2);            //Set SW2 as Internal Pull Up;

while(1)
    {
        if(!(PIND&(1<<SW1))&&!(PIND&(1<<SW2)))
        {
            PORTB|=(1<<LED);

        }
        else
        {
            PORTB&=~(1<<LED);

        }
}
}

