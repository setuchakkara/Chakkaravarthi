#include <stdio.h>
#include "test.h"
void fun3()
{
	int arr[5]={8,9,7,3,4},a[5];
	int temp,i,j;
	/*Sorting Algorithm*/
	for(i=0;i<4;i++)
		for(j=i;j<4;j++)
		{
			if(arr[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}

                 for(i=0;i<4;i++)
		{
		}

}
