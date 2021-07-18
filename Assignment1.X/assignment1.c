/*
 * File:   assignment1.c
 * Author: ShemaLucien
 *
 * Created on July 16, 2021, 2:00 PM
 */
// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.



#define _XTAL_FREQ 8000000 // defining frequency 
#include <xc.h>

void main(void) {
    
    TRISD=0x00; /* Configure the ports as output */
    PORTD=0x00; // means port D will use hexadecimal numbers 
    while(1)
    {
        PORTDbits.RD0=1; // switch on red light
        __delay_ms(1000);
        PORTDbits.RD0=0; // switch off red light
        
        PORTDbits.RD1=1; // switch on yellow light
        __delay_ms(1000);
         PORTDbits.RD1=0; // switch off yellow light
         
          PORTDbits.RD2=1; // switch on green light
          __delay_ms(1000);
          PORTDbits.RD2=0; // switch off green light
          
          PORTDbits.RD0=1;
             __delay_ms(1000);
             PORTDbits.RD0=0;
    }
    return;
}
