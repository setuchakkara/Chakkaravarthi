/*
 * pointer.c
 *
 *  Created on: 10-Apr-2020
 *      Author: Chakkaravarthi
 */

#include "../test/test.h"

void fun(int **),fun_1(int ***);
int a=10,b=20;

void test(void)
{
int *x,**y;
fun(&x);
printf("/*/x = %d",*x);
fun1(&y);
printf("/*/x = %d",**y);

}

void fun(int **ptr)
{
	*ptr=&a;
}

void fun_1(int ***ptr)
{
	**ptr=&b;
}
