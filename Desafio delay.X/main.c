/*
 * File:   main.c
 * Author: 19180037
 *
 * Created on 16 de Março de 2020, 08:15
 */

#include <xc.h>
#include "config.h"
#include "delay.h"
#include "leds.h"

int main(void) 
{
    initLED();
    
    while(1)
    {
        ligarLED();
        delay(2000);
        desligarLED();
        delay(1000);
        
    }
         
}
