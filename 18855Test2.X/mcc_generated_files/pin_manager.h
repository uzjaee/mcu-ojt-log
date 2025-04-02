/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set R_LED_1 aliases
#define R_LED_1_TRIS                 TRISAbits.TRISA0
#define R_LED_1_LAT                  LATAbits.LATA0
#define R_LED_1_PORT                 PORTAbits.RA0
#define R_LED_1_WPU                  WPUAbits.WPUA0
#define R_LED_1_OD                   ODCONAbits.ODCA0
#define R_LED_1_ANS                  ANSELAbits.ANSA0
#define R_LED_1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define R_LED_1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define R_LED_1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define R_LED_1_GetValue()           PORTAbits.RA0
#define R_LED_1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define R_LED_1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define R_LED_1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define R_LED_1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define R_LED_1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define R_LED_1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define R_LED_1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define R_LED_1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS                 TRISBbits.TRISB5
#define IO_RB5_LAT                  LATBbits.LATB5
#define IO_RB5_PORT                 PORTBbits.RB5
#define IO_RB5_WPU                  WPUBbits.WPUB5
#define IO_RB5_OD                   ODCONBbits.ODCB5
#define IO_RB5_ANS                  ANSELBbits.ANSB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC1
#define LED1_LAT                  LATCbits.LATC1
#define LED1_PORT                 PORTCbits.RC1
#define LED1_WPU                  WPUCbits.WPUC1
#define LED1_OD                   ODCONCbits.ODCC1
#define LED1_ANS                  ANSELCbits.ANSC1
#define LED1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED1_GetValue()           PORTCbits.RC1
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/