#include "main.h"

void delay(void)
{
  int counter=0;
  while(counter++ <500000);
  counter=0;
}
int main()
{
  unsigned char number = 0;
  int arr[16] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, HEXA, HEXB, HEXC, HEXD, HEXE, HEXF};
  SEVENSEG_init();
  KEYPAD_init();
  while(1)
  {
    
    number = KEYPAD_getNumPressed();
    if(number >=0 && number <=9)
        SEVENSEG_displayNum(arr[number]);
    else if(number == 'A')
        SEVENSEG_displayNum(arr[10]);
    else if(number == 'B')
        SEVENSEG_displayNum(arr[11]);
    else if (number == 'C')
        SEVENSEG_displayNum(arr[12]);
    else if (number == 'D')
        SEVENSEG_displayNum(arr[13]);
    else if (number == 'E')
        SEVENSEG_displayNum(arr[14]);
    else if (number == 'F')
        SEVENSEG_displayNum(arr[15]);
    


  }
  
}
