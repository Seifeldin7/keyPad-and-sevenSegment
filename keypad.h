#include "tm4c123gh6pm.h"
#include "stdbool.h"

#define KEYPAD_PORT_OUT GPIO_PORTE_DATA_R
#define KEYPAD_PORT_IN GPIO_PORTC_DATA_R

void KEYPAD_init(void);
unsigned char KEYPAD_getNumPressed(void);