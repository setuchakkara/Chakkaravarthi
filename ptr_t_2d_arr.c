#include <stdio.h>

main()
{
int *p,i,j,(*ptr)[][10];
int a[2][10]={{0,1,2,6,4,5,6,7,8,9},
            {0,1,2,6,4,5,6,7,8,9},
          };
ptr=&a;
int (*arr)[10]=(int(*)[])ptr;
for(i=0;i<2;i++,printf("\n" ))
{
p=(int*)arr;
for(j=0;j<10;j++,p++)
printf("%d",*p);
}
arr++;
}

