#include "seven_segment.h"

void SEVENSEG_init(void)
{
    SYSCTL_RCGCGPIO_R    |=  SYSCTL_RCGCGPIO_R1;
    GPIO_PORTB_DEN_R     =  0xFF;
    GPIO_PORTB_DIR_R     =  0xFF;
    GPIO_PORTB_DATA_R    =  0xFF;
}

void SEVENSEG_displayNum(unsigned char num)
{
   GPIO_PORTB_DATA_R = num;
}

