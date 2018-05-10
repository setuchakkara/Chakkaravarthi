#include <stdio.h>
#define fun(x)(printf("%d",x))
void main()
{
int a,b;
int sum,fact,i;

sum=a+b;

/*Addition*/
sum=+sum;

/*Subraction*/
sum=a-b;

/*Multiplication*/
sum=a*b;

/*Division*/
sum=a/b;

/*Factorial*/
for(i=0,fact=1;i<5;i++)
	fact*=i;

fun(sum);
}

