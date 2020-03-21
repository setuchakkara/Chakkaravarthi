#include <stdio.h>
#include "../test/test.h"
void fun1(void)
{
int *p,i,(*ptr)[10];
int a[10]={0,1,2,6,4,5,6,7,8,9};
ptr=&a;
p=(int*)ptr;
for(i=0;i<10;i++,printf("  "))
printf("%d",*p++);
}
