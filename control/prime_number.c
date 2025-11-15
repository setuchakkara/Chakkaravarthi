/**
 * @file prime_number.c
 * @brief Program to check whether a given number is prime or not
 * 
 * @function prime_number
 * @param number - The integer number to be checked for primality
 * @return void
 * 
 * @description
 * This program determines if a given number is a prime number.
 * A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
 * 
 * The prime_number function iterates from 2 to number/2 and checks if any number divides evenly.
 * If a divisor is found, the number is marked as not prime (flag=1).
 * Otherwise, it is identified as a prime number (flag=0).
 * 
 * Example: prime_number(29) outputs "29 is a prime number"
 */

#include <stdio.h>
void prime_number(int number);
void main()
{
    int number = 29;
    prime_number(number);

}
void prime_number(int number)
{
    int i,flag=0;
    for(i=2;i<=number/2;i++)
    {
     if((number % i) == 0)
     {
         flag=1;
         break;
     }

    }
    if(flag==0)
        printf("%d is a prime number\n",number);
    else
        printf("%d is not a prime number\n",number);

}