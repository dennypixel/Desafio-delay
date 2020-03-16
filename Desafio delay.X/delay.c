/*
 * File:   delay.c
 * Author: 19180037
 *
 * Created on 16 de Mar�o de 2020, 08:20
 */

#include <xc.h>
#include "config.h"
#include "delay.h"

void delay(unsigned int t)
{
    while( t!=0 ) // � igula � "while( t )"
    {
        __delay_ms(1);
        //  t = t-1;      � igual � "t--;"
        t--;
    }
   
}
