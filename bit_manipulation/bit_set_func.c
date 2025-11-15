#include <stdio.h>
void bit_set_func(char number);
void main()
{
    unsigned char number = 14;
    bit_set_func(number);

}

void bit_set_func(char number)
{
    char i,temp;

    for(i=0;i<8;i++)
    {
     if((number & (1<<i)) != 0x00)
     printf("Bit %d - set \n",i);

    }

}