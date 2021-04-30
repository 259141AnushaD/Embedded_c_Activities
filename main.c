/**
 * @file main.c
 * @author Anusha D
 * @brief Seat temperature detecting using atmega328 microcontroller
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

int main(void)
{
	/*Initialize Peripherals*/
	peripheral_init();

	while(1){
		int status = 0;
		status = initialize_led();	/*Checking the status of buttons*/
		if(status == 1){
			InitADC();	/*Initailising ADC*/
			setup_pwm();	/*Setting up PWM*/
			USARTInit(103);	/*Initialising USART*/
    		uint16_t temp = 0;
			temp = ReadADC(0); /*Reading the temperature value*/
			_delay_ms(200);
			pwm_waveform(temp);	/*Generation of PWM according to the temperature value*/
			_delay_ms(200);
			USARTWriteChar(temp);	/*Sending temperature value to Monitor*/
		}
    }
	return 0;
}
