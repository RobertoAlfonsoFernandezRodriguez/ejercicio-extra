/*
 * File:   main.c
 * Author: Roberto Fernandez
 *
 * Created on 1 de febrero de 2024, 04:27 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 20000000
//                     1 2 3 4 5 6 7 8 9 A B C D E F
int display_array[]= {63,6,91,79,102,109,124,71,127,103,119,124,57,94,121,113};
// g h i j k l m n ñ o p q r s t u v w x y z
int display_abc[]={61, 116, 48, 14, 117, 56, 21, 84, 85, 63, 115, 103, 51, 109, 120, 62, 46, 42, 118, 110, 75};

void main(void) {
    ADCON1 = 0B00001111; 
    TRISD = 0;
    /*TRISAbits.RA0 =0;
    TRISAbits.RA1 =0;
    TRISAbits.RA2 =0;
    TRISAbits.RA3 =0;
    TRISAbits.RA4 =0;*/
    TRISA= 0B00011110;
    LATD = display_array[1];
     __delay_ms(500);
    TRISA= 0B00011101;
    LATD = display_array[2];
     __delay_ms(500);
    TRISA= 0B00011011;
    LATD = display_array[3];
     __delay_ms(500);
    TRISA= 0B00010111;
    LATD = display_array[4];
     __delay_ms(500);
    TRISA= 0B00001111;
    LATD = display_array[5];
     __delay_ms(500);
     
     TRISA= 0B00011110;
    LATD = display_abc[1];
     __delay_ms(500);
    TRISA= 0B00011101;
    LATD = display_abc[9];
     __delay_ms(500);
    TRISA= 0B00011011;
    LATD = display_abc[0];
     __delay_ms(500);
    TRISA= 0B00010111;
    LATD = display_array[10];
     __delay_ms(500);
    TRISA= 0B00001111;
    LATD = display_abc[12];
     __delay_ms(500);
     
     TRISA= 0B00011110;
    LATD = display_array[12];
     __delay_ms(500);
    TRISA= 0B00011101;
    LATD = display_abc[2];
     __delay_ms(500);
    TRISA= 0B00011011;
    LATD = display_abc[12];
     __delay_ms(500);
    TRISA= 0B00010111;
    LATD = display_array[12];
     __delay_ms(500);
    TRISA= 0B00001111;
    LATD = display_abc[9];
     __delay_ms(500);
    /*for(int i=0; i<=22; i++){
        LATD = display_abc[i];
         __delay_ms(500);
         
    }*/
   
   
    return;
}
