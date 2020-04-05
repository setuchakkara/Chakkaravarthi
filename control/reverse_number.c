/*
 * reverse_number.c
 *
 *  Created on: 22-Mar-2020
 *      Author: Chakkaravarthi
 */

int reverse_number(int number)
{
  int rev=0;

  while(number)
  {
    rev=(rev*10)+(number%10);
    number/=10;
  }
  return rev;
}
