#include "Activity1.h"

void peripheral_init(void)
{
	/* Configure LED Pin */
	DDRB |= (1<<LED_PIN);
	/* Configure Switch1 pin as Output */
	DDRD &= ~(1<<SW_PIN_0);
    SW_PORT |= (1<<SW_PIN_0);
	/* Configure Switch2 pin as Output */
    DDRD &= ~(1<<SW_PIN_1);
    SW_PORT |= (1<<SW_PIN_1);
}

int initialize_led(){
    /* Check if both Switch is closed; i.e Pins 2 and 3 of port D is low*/
    if(!(PIND&(1<<SW_PIN_0)) && !(PIND&(1<<SW_PIN_1))){
        /* Turn on LED */
        LED_PORT |= (1<<LED_PIN);
        _delay_ms(2000);
        return 1;
    }
    else{
        LED_PORT &= ~(1<<LED_PIN);
        /* Turn off LED*/
        _delay_ms(2000);
        return 0;
    }
}

