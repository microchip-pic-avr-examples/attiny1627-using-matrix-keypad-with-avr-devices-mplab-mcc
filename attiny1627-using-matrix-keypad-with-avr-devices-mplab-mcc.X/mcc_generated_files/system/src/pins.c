/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pins.c
  
  This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "../pins.h"

static void (*PC0_InterruptHandler)(void);
static void (*PC1_InterruptHandler)(void);
static void (*PC2_InterruptHandler)(void);
static void (*PC3_InterruptHandler)(void);
static void (*PA1_InterruptHandler)(void);
static void (*PA2_InterruptHandler)(void);
static void (*PB0_InterruptHandler)(void);
static void (*PB1_InterruptHandler)(void);
static void (*PB2_InterruptHandler)(void);
static void (*PB3_InterruptHandler)(void);
void PORT_Initialize(void);

void PIN_MANAGER_Initialize()
{
  PORT_Initialize();
  /* DIR Registers Initialization */
    PORTA.DIR = 0x6;
    PORTB.DIR = 0xF;
    PORTC.DIR = 0x0;

  /* OUT Registers Initialization */
    PORTA.OUT = 0x0;
    PORTB.OUT = 0xC;
    PORTC.OUT = 0x0;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x8;
    PORTA.PIN2CTRL = 0x8;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x0;
    PORTA.PIN5CTRL = 0x0;
    PORTA.PIN6CTRL = 0x0;
    PORTA.PIN7CTRL = 0x0;
    PORTB.PIN0CTRL = 0x8;
    PORTB.PIN1CTRL = 0x8;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x9;
    PORTC.PIN1CTRL = 0x9;
    PORTC.PIN2CTRL = 0x9;
    PORTC.PIN3CTRL = 0x9;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;

  /* PORTMUX Initialization */
    PORTMUX.CCLROUTEA = 0x0;
    PORTMUX.EVSYSROUTEA = 0x0;
    PORTMUX.SPIROUTEA = 0x0;
    PORTMUX.TCAROUTEA = 0x0;
    PORTMUX.TCBROUTEA = 0x0;
    PORTMUX.USARTROUTEA = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    PC0_SetInterruptHandler(PC0_DefaultInterruptHandler);
    PC1_SetInterruptHandler(PC1_DefaultInterruptHandler);
    PC2_SetInterruptHandler(PC2_DefaultInterruptHandler);
    PC3_SetInterruptHandler(PC3_DefaultInterruptHandler);
    PA1_SetInterruptHandler(PA1_DefaultInterruptHandler);
    PA2_SetInterruptHandler(PA2_DefaultInterruptHandler);
    PB0_SetInterruptHandler(PB0_DefaultInterruptHandler);
    PB1_SetInterruptHandler(PB1_DefaultInterruptHandler);
    PB2_SetInterruptHandler(PB2_DefaultInterruptHandler);
    PB3_SetInterruptHandler(PB3_DefaultInterruptHandler);
}

void PORT_Initialize(void)
{
  /* On AVR devices all peripherals are enable from power on reset, this
  * disables all peripherals to save power. Driver shall enable
  * peripheral if used */

  /* Set all pins to low power mode */
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTA + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTB + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
    for (uint8_t i = 0; i < 8; i++) {
      *((uint8_t *)&PORTC + 0x10 + i) |= 1 << PORT_PULLUPEN_bp;
    }
    
}
/**
  Allows selecting an interrupt handler for PC0 at application runtime
*/
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC0_InterruptHandler = interruptHandler;
}

void PC0_DefaultInterruptHandler(void)
{
    // add your PC0 interrupt custom code
    // or set custom function using PC0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC1 at application runtime
*/
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC1_InterruptHandler = interruptHandler;
}

void PC1_DefaultInterruptHandler(void)
{
    // add your PC1 interrupt custom code
    // or set custom function using PC1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC2 at application runtime
*/
void PC2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC2_InterruptHandler = interruptHandler;
}

void PC2_DefaultInterruptHandler(void)
{
    // add your PC2 interrupt custom code
    // or set custom function using PC2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PC3 at application runtime
*/
void PC3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PC3_InterruptHandler = interruptHandler;
}

void PC3_DefaultInterruptHandler(void)
{
    // add your PC3 interrupt custom code
    // or set custom function using PC3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA1 at application runtime
*/
void PA1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA1_InterruptHandler = interruptHandler;
}

void PA1_DefaultInterruptHandler(void)
{
    // add your PA1 interrupt custom code
    // or set custom function using PA1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PA2 at application runtime
*/
void PA2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PA2_InterruptHandler = interruptHandler;
}

void PA2_DefaultInterruptHandler(void)
{
    // add your PA2 interrupt custom code
    // or set custom function using PA2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB0 at application runtime
*/
void PB0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB0_InterruptHandler = interruptHandler;
}

void PB0_DefaultInterruptHandler(void)
{
    // add your PB0 interrupt custom code
    // or set custom function using PB0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB1 at application runtime
*/
void PB1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB1_InterruptHandler = interruptHandler;
}

void PB1_DefaultInterruptHandler(void)
{
    // add your PB1 interrupt custom code
    // or set custom function using PB1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB2 at application runtime
*/
void PB2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB2_InterruptHandler = interruptHandler;
}

void PB2_DefaultInterruptHandler(void)
{
    // add your PB2 interrupt custom code
    // or set custom function using PB2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for PB3 at application runtime
*/
void PB3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    PB3_InterruptHandler = interruptHandler;
}

void PB3_DefaultInterruptHandler(void)
{
    // add your PB3 interrupt custom code
    // or set custom function using PB3_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTA.INTFLAGS & PORT_INT1_bm)
    {
       PA1_InterruptHandler();
    }
    if(VPORTA.INTFLAGS & PORT_INT2_bm)
    {
       PA2_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTB.INTFLAGS & PORT_INT0_bm)
    {
       PB0_InterruptHandler();
    }
    if(VPORTB.INTFLAGS & PORT_INT1_bm)
    {
       PB1_InterruptHandler();
    }
    if(VPORTB.INTFLAGS & PORT_INT2_bm)
    {
       PB2_InterruptHandler();
    }
    if(VPORTB.INTFLAGS & PORT_INT3_bm)
    {
       PB3_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{  
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT0_bm)
    {
       PC0_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT1_bm)
    {
       PC1_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT2_bm)
    {
       PC2_InterruptHandler();
    }
    if(VPORTC.INTFLAGS & PORT_INT3_bm)
    {
       PC3_InterruptHandler();
    }

    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

/**
 End of File
*/