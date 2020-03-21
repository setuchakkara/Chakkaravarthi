
/*Program of Arithmatic Operation*/
/*Author:Chakkaravarthi*/
/*Basic Program written for testing */

#include <stdio.h>
#include "test.h"
#define fun(x)(printf("%d",x))

int main(void)
{

int a=0,b=1,fact=0,i;

int arr[5]={25,12,11,1,5};
int sum,sub,mul,div;
struct status info;
/*Addition*/
sum=a+b;

/*Subraction*/
sub=a-b;

/*Multiplication*/
mul=a*b;

/*Division*/
div=a/b;
  
printf("sum=%d\n,diff=%d\n,mul=%d\n,div=%d\n",sum,sub,mul,div);
/*Factorial*/
for(i=0,fact=1;i<5;i++)
	fact*=i;

printf("fact=%d",fact);

/*Call the function*/
fun(sum);
fun1();
fun2();
fun3();
//fun_sort(&arr,(sizeof(arr)/sizeof(int)));
//for(i=0;i<5;i++)
//printf("%d ",arr[i]);
binary_search(&arr,(sizeof(arr)/sizeof(int)),26,&info);
printf("status=%d,location=%d",info.found,info.location);
return 0;
}

/*EOL*/
