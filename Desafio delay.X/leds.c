/*
 * File:   leds.c
 * Author: 19180037
 *
 * Created on 16 de Março de 2020, 08:26
 */


#include <xc.h>


void initLED( void )
{
    PORTDbits.RD6 = 0;
    TRISDbits.TRISD6 = 0;
}
void ligarLED( void )
{
    PORTDbits.RD6 = 1;
}

void desligarLED( void )
{
    PORTDbits.RD6 = 0;
}

unsigned char lerLED( void )
{
    return( PORTDbits.RD6 );
}
