/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/
#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <stdlib.h>
#include <string.h>
#include <util/delay.h>

#define PRESS_VALID 0x01
#define COLUMN_gm   (PIN0_bm | PIN1_bm | PIN2_bm | PIN3_bm)
#define COLUMN_PORT PORTC

volatile uint8_t key_pressed;
char input_pass[20];
uint8_t cursor = 0;
char passcode[20] = "123ABC";

/* Macro for buttons in the grid */
char btn_value[16] = "123A456B789C*0#D";

/* Function prototypes */
void row_output_column_input(void);
void row_input_column_output(void);
void scan_keys(void);
void btn_debounce(void);
void lp_delay_ms(uint16_t delay);
void check_passcode(void);

void row_output_column_input()
{
    ROW0_SetDigitalOutput();
    ROW1_SetDigitalOutput();
    ROW2_SetDigitalOutput();
    ROW3_SetDigitalOutput();
    
	COLUMN0_SetDigitalInput() ;
    COLUMN1_SetDigitalInput() ;
    COLUMN2_SetDigitalInput() ;
    COLUMN3_SetDigitalInput() ;
	
}

void row_input_column_output()
{
	ROW0_SetDigitalInput();
    ROW1_SetDigitalInput();
    ROW2_SetDigitalInput();
    ROW3_SetDigitalInput();
	

    COLUMN0_SetDigitalOutput();
    COLUMN1_SetDigitalOutput();
    COLUMN2_SetDigitalOutput();
    COLUMN3_SetDigitalOutput();
	
}

void scan_keys()
{
	key_pressed = 0;

	if(!COLUMN0_GetValue())
	{
		key_pressed = 0;
	}
	else if(!COLUMN1_GetValue())
	{
		key_pressed = 1;
	}
	else if(!COLUMN2_GetValue())
	{
		key_pressed = 2;
	}
	else if(!COLUMN3_GetValue())
	{
		key_pressed = 3;
	}

	row_input_column_output();

	if(!ROW0_GetValue())
	{
		key_pressed += 0;
	}
	else if(!ROW1_GetValue())
	{
		key_pressed += 4;
	}
	else if(!ROW2_GetValue())
	{
		key_pressed += 8;
	}
	else if(!ROW3_GetValue())
	{
		key_pressed += 12;
	}

	row_output_column_input();
}

void btn_debounce()
{
	/* GPIOR0 bit 0 (PRESS_VALID) is press validation flag */
	GPIOR0 |= PRESS_VALID;
	for(uint8_t i = 0; i < 10; i++)
	{
		/* If no button is pressed */
		if((COLUMN_PORT.IN & COLUMN_gm) == COLUMN_gm)
		{
			GPIOR0 &= ~PRESS_VALID;
			break;
		}
		lp_delay_ms(2);
	}
}

void lp_delay_ms(uint16_t delay)
{
	volatile uint16_t pit_cnt = 0;
	/* Enable PIT interrupt */
	RTC_EnablePITInterrupt();
	/* Going to sleep until number of ms has been reached */
	while(pit_cnt != delay)
	{
		sleep_mode();
		pit_cnt += 1;
	}
	/* Disable PIT interrupt */
	RTC_DisablePITInterrupt();
}

void check_passcode()
{
	/* If star is pressed */
	if(btn_value[key_pressed] == '*')
	{
		/* Reset input_pass */
		memset(input_pass, 0, sizeof(input_pass));
		cursor = 0;
	}
	/* If pound is pressed */
	else if(btn_value[key_pressed] == '#')
	{
		/* If input passcode is the same as the set passcode */
		if(!(strcmp(passcode, input_pass)))
		{
			LED_GREEN_SetLow();
			lp_delay_ms(500);
			LED_GREEN_SetHigh();
		}
		else
		{
			LED_RED_SetLow();
			lp_delay_ms(500);
			
            LED_RED_SetHigh();
		}
		/* Reset input_pass */
		memset(input_pass, 0, sizeof(input_pass));
		cursor = 0;
	}
	/* If no special character (star or pound) is pressed */
	else
	{
		/* If length is not surpassed (20 characters) */
		if(cursor < 20)
		{
			/* Record press */
			input_pass[cursor] = btn_value[key_pressed];
			cursor++;
		}
		else
		{
			cursor = 0;
			LED_RED_SetLow();
			lp_delay_ms(250);
			LED_RED_SetHigh();
			lp_delay_ms(250);
			LED_RED_SetLow();
			lp_delay_ms(250);
			LED_RED_SetHigh();
			/* Reset input_pass */
			memset(input_pass, 0, sizeof(input_pass));
		}
	}
}


int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        /* Sleep until key press wakes up the CPU */
		sleep_mode();
		/* PRESS_VALID flag in GPIOR0 is high if a valid press is detected */
		btn_debounce();

		/* If the key press was valid */
		if((GPIOR0 & PRESS_VALID) == PRESS_VALID)
		{
			scan_keys();
			check_passcode();
			/* Wait for all buttons to be released */
			while((COLUMN_PORT.IN & COLUMN_gm) != COLUMN_gm)
			{
				/* Sleep until key release wakes up the CPU */
				sleep_mode();
			}
		}
    }    
}