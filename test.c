#include <stdio.h>

#define fun(x)(printf("%d",x))

void main()
{

int a,b,fact;

int sum,sub,mul,div;

/*Addition*/
sum=a+b;

/*Subraction*/
sub=a-b;

/*Multiplication*/
mul=a*b;

/*Division*/
div=a/b;
  
/*Factorial*/
for(i=0,fact=1;i<5;i++)
	fact*=i;

/*Call the function*/
fun(sum);

}

