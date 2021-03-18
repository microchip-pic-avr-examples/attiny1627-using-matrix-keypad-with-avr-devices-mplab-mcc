/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set COLUMN1 aliases
#define COLUMN1_SetHigh() do { PORTC_OUTSET = 0x1; } while(0)
#define COLUMN1_SetLow() do { PORTC_OUTCLR = 0x1; } while(0)
#define COLUMN1_Toggle() do { PORTC_OUTTGL = 0x1; } while(0)
#define COLUMN1_GetValue() (VPORTC.IN & (0x1 << 0))
#define COLUMN1_SetDigitalInput() do { PORTC_DIRCLR = 0x1; } while(0)
#define COLUMN1_SetDigitalOutput() do { PORTC_DIRSET = 0x1; } while(0)
#define COLUMN1_SetPullUp() do { PORTC_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define COLUMN1_ResetPullUp() do { PORTC_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define COLUMN1_SetInverted() do { PORTC_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define COLUMN1_ResetInverted() do { PORTC_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define COLUMN1_DisableInterruptOnChange() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define COLUMN1_EnableInterruptForBothEdges() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define COLUMN1_EnableInterruptForRisingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define COLUMN1_EnableInterruptForFallingEdge() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define COLUMN1_DisableDigitalInputBuffer() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define COLUMN1_EnableInterruptForLowLevelSensing() do { PORTC.PIN0CTRL = (PORTC.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set COLUMN2 aliases
#define COLUMN2_SetHigh() do { PORTC_OUTSET = 0x2; } while(0)
#define COLUMN2_SetLow() do { PORTC_OUTCLR = 0x2; } while(0)
#define COLUMN2_Toggle() do { PORTC_OUTTGL = 0x2; } while(0)
#define COLUMN2_GetValue() (VPORTC.IN & (0x1 << 1))
#define COLUMN2_SetDigitalInput() do { PORTC_DIRCLR = 0x2; } while(0)
#define COLUMN2_SetDigitalOutput() do { PORTC_DIRSET = 0x2; } while(0)
#define COLUMN2_SetPullUp() do { PORTC_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define COLUMN2_ResetPullUp() do { PORTC_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define COLUMN2_SetInverted() do { PORTC_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define COLUMN2_ResetInverted() do { PORTC_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define COLUMN2_DisableInterruptOnChange() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define COLUMN2_EnableInterruptForBothEdges() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define COLUMN2_EnableInterruptForRisingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define COLUMN2_EnableInterruptForFallingEdge() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define COLUMN2_DisableDigitalInputBuffer() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define COLUMN2_EnableInterruptForLowLevelSensing() do { PORTC.PIN1CTRL = (PORTC.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set COLUMN3 aliases
#define COLUMN3_SetHigh() do { PORTC_OUTSET = 0x4; } while(0)
#define COLUMN3_SetLow() do { PORTC_OUTCLR = 0x4; } while(0)
#define COLUMN3_Toggle() do { PORTC_OUTTGL = 0x4; } while(0)
#define COLUMN3_GetValue() (VPORTC.IN & (0x1 << 2))
#define COLUMN3_SetDigitalInput() do { PORTC_DIRCLR = 0x4; } while(0)
#define COLUMN3_SetDigitalOutput() do { PORTC_DIRSET = 0x4; } while(0)
#define COLUMN3_SetPullUp() do { PORTC_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define COLUMN3_ResetPullUp() do { PORTC_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define COLUMN3_SetInverted() do { PORTC_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define COLUMN3_ResetInverted() do { PORTC_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define COLUMN3_DisableInterruptOnChange() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define COLUMN3_EnableInterruptForBothEdges() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define COLUMN3_EnableInterruptForRisingEdge() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define COLUMN3_EnableInterruptForFallingEdge() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define COLUMN3_DisableDigitalInputBuffer() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define COLUMN3_EnableInterruptForLowLevelSensing() do { PORTC.PIN2CTRL = (PORTC.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set COLUMN0 aliases
#define COLUMN0_SetHigh() do { PORTC_OUTSET = 0x8; } while(0)
#define COLUMN0_SetLow() do { PORTC_OUTCLR = 0x8; } while(0)
#define COLUMN0_Toggle() do { PORTC_OUTTGL = 0x8; } while(0)
#define COLUMN0_GetValue() (VPORTC.IN & (0x1 << 3))
#define COLUMN0_SetDigitalInput() do { PORTC_DIRCLR = 0x8; } while(0)
#define COLUMN0_SetDigitalOutput() do { PORTC_DIRSET = 0x8; } while(0)
#define COLUMN0_SetPullUp() do { PORTC_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define COLUMN0_ResetPullUp() do { PORTC_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define COLUMN0_SetInverted() do { PORTC_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define COLUMN0_ResetInverted() do { PORTC_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define COLUMN0_DisableInterruptOnChange() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define COLUMN0_EnableInterruptForBothEdges() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define COLUMN0_EnableInterruptForRisingEdge() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define COLUMN0_EnableInterruptForFallingEdge() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define COLUMN0_DisableDigitalInputBuffer() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define COLUMN0_EnableInterruptForLowLevelSensing() do { PORTC.PIN3CTRL = (PORTC.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set ROW3 aliases
#define ROW3_SetHigh() do { PORTA_OUTSET = 0x2; } while(0)
#define ROW3_SetLow() do { PORTA_OUTCLR = 0x2; } while(0)
#define ROW3_Toggle() do { PORTA_OUTTGL = 0x2; } while(0)
#define ROW3_GetValue() (VPORTA.IN & (0x1 << 1))
#define ROW3_SetDigitalInput() do { PORTA_DIRCLR = 0x2; } while(0)
#define ROW3_SetDigitalOutput() do { PORTA_DIRSET = 0x2; } while(0)
#define ROW3_SetPullUp() do { PORTA_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define ROW3_ResetPullUp() do { PORTA_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define ROW3_SetInverted() do { PORTA_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define ROW3_ResetInverted() do { PORTA_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define ROW3_DisableInterruptOnChange() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define ROW3_EnableInterruptForBothEdges() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define ROW3_EnableInterruptForRisingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define ROW3_EnableInterruptForFallingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define ROW3_DisableDigitalInputBuffer() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define ROW3_EnableInterruptForLowLevelSensing() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set ROW2 aliases
#define ROW2_SetHigh() do { PORTA_OUTSET = 0x4; } while(0)
#define ROW2_SetLow() do { PORTA_OUTCLR = 0x4; } while(0)
#define ROW2_Toggle() do { PORTA_OUTTGL = 0x4; } while(0)
#define ROW2_GetValue() (VPORTA.IN & (0x1 << 2))
#define ROW2_SetDigitalInput() do { PORTA_DIRCLR = 0x4; } while(0)
#define ROW2_SetDigitalOutput() do { PORTA_DIRSET = 0x4; } while(0)
#define ROW2_SetPullUp() do { PORTA_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define ROW2_ResetPullUp() do { PORTA_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define ROW2_SetInverted() do { PORTA_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define ROW2_ResetInverted() do { PORTA_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define ROW2_DisableInterruptOnChange() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define ROW2_EnableInterruptForBothEdges() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define ROW2_EnableInterruptForRisingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define ROW2_EnableInterruptForFallingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define ROW2_DisableDigitalInputBuffer() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define ROW2_EnableInterruptForLowLevelSensing() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set ROW0 aliases
#define ROW0_SetHigh() do { PORTB_OUTSET = 0x1; } while(0)
#define ROW0_SetLow() do { PORTB_OUTCLR = 0x1; } while(0)
#define ROW0_Toggle() do { PORTB_OUTTGL = 0x1; } while(0)
#define ROW0_GetValue() (VPORTB.IN & (0x1 << 0))
#define ROW0_SetDigitalInput() do { PORTB_DIRCLR = 0x1; } while(0)
#define ROW0_SetDigitalOutput() do { PORTB_DIRSET = 0x1; } while(0)
#define ROW0_SetPullUp() do { PORTB_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define ROW0_ResetPullUp() do { PORTB_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define ROW0_SetInverted() do { PORTB_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define ROW0_ResetInverted() do { PORTB_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define ROW0_DisableInterruptOnChange() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define ROW0_EnableInterruptForBothEdges() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define ROW0_EnableInterruptForRisingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define ROW0_EnableInterruptForFallingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define ROW0_DisableDigitalInputBuffer() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define ROW0_EnableInterruptForLowLevelSensing() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set ROW1 aliases
#define ROW1_SetHigh() do { PORTB_OUTSET = 0x2; } while(0)
#define ROW1_SetLow() do { PORTB_OUTCLR = 0x2; } while(0)
#define ROW1_Toggle() do { PORTB_OUTTGL = 0x2; } while(0)
#define ROW1_GetValue() (VPORTB.IN & (0x1 << 1))
#define ROW1_SetDigitalInput() do { PORTB_DIRCLR = 0x2; } while(0)
#define ROW1_SetDigitalOutput() do { PORTB_DIRSET = 0x2; } while(0)
#define ROW1_SetPullUp() do { PORTB_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define ROW1_ResetPullUp() do { PORTB_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define ROW1_SetInverted() do { PORTB_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define ROW1_ResetInverted() do { PORTB_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define ROW1_DisableInterruptOnChange() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define ROW1_EnableInterruptForBothEdges() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define ROW1_EnableInterruptForRisingEdge() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define ROW1_EnableInterruptForFallingEdge() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define ROW1_DisableDigitalInputBuffer() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define ROW1_EnableInterruptForLowLevelSensing() do { PORTB.PIN1CTRL = (PORTB.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LED_GREEN aliases
#define LED_GREEN_SetHigh() do { PORTB_OUTSET = 0x4; } while(0)
#define LED_GREEN_SetLow() do { PORTB_OUTCLR = 0x4; } while(0)
#define LED_GREEN_Toggle() do { PORTB_OUTTGL = 0x4; } while(0)
#define LED_GREEN_GetValue() (VPORTB.IN & (0x1 << 2))
#define LED_GREEN_SetDigitalInput() do { PORTB_DIRCLR = 0x4; } while(0)
#define LED_GREEN_SetDigitalOutput() do { PORTB_DIRSET = 0x4; } while(0)
#define LED_GREEN_SetPullUp() do { PORTB_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_GREEN_ResetPullUp() do { PORTB_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_GREEN_SetInverted() do { PORTB_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_GREEN_ResetInverted() do { PORTB_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_GREEN_DisableInterruptOnChange() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_GREEN_EnableInterruptForBothEdges() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_GREEN_EnableInterruptForRisingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_GREEN_EnableInterruptForFallingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_GREEN_DisableDigitalInputBuffer() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_GREEN_EnableInterruptForLowLevelSensing() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

//get/set LED_RED aliases
#define LED_RED_SetHigh() do { PORTB_OUTSET = 0x8; } while(0)
#define LED_RED_SetLow() do { PORTB_OUTCLR = 0x8; } while(0)
#define LED_RED_Toggle() do { PORTB_OUTTGL = 0x8; } while(0)
#define LED_RED_GetValue() (VPORTB.IN & (0x1 << 3))
#define LED_RED_SetDigitalInput() do { PORTB_DIRCLR = 0x8; } while(0)
#define LED_RED_SetDigitalOutput() do { PORTB_DIRSET = 0x8; } while(0)
#define LED_RED_SetPullUp() do { PORTB_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_RED_ResetPullUp() do { PORTB_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_RED_SetInverted() do { PORTB_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_RED_ResetInverted() do { PORTB_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_RED_DisableInterruptOnChange() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_RED_EnableInterruptForBothEdges() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_RED_EnableInterruptForRisingEdge() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_RED_EnableInterruptForFallingEdge() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_RED_DisableDigitalInputBuffer() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_RED_EnableInterruptForLowLevelSensing() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)

void PIN_MANAGER_Initialize();
void PC0_DefaultInterruptHandler(void);
void PC0_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC1_DefaultInterruptHandler(void);
void PC1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC2_DefaultInterruptHandler(void);
void PC2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PC3_DefaultInterruptHandler(void);
void PC3_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA1_DefaultInterruptHandler(void);
void PA1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PA2_DefaultInterruptHandler(void);
void PA2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB0_DefaultInterruptHandler(void);
void PB0_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB1_DefaultInterruptHandler(void);
void PB1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB2_DefaultInterruptHandler(void);
void PB2_SetInterruptHandler(void (* interruptHandler)(void)) ; 
void PB3_DefaultInterruptHandler(void);
void PB3_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */