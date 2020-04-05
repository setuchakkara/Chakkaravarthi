/*
 * prime_number.c
 *
 *  Created on: 22-Mar-2020
 *      Author: Chakkaravarthi
 */

#include "../test/test.h"

flag prime_number(int number)
{
  int i;
   for (i=2;i<number;i++)
   {
	   if(number%i==0)
	   { return False;}

   }
	return True;
}
