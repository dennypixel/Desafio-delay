/*
 * File:   chave.c
 * Author: 19180037
 *
 * Created on 16 de Março de 2020, 09:32
 */


#include <xc.h>

void initCH( void )
{
    TRISDbits.TRISD7 = 1; 
}

unsigned char lerCH( void )
{
    return( PORTDbits.RD7 );
}
