#include <stdio.h>
#include <stdlib.h>
#include "../test/test.h"
void dynamic_1d_array(int size)
{
	int *ptr,i;
	ptr=(int*)malloc(size*sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Memory Not Allocated \n");
		exit(0);
	}
	for(i=0;i<size;i++)
		ptr[i]=i;
	for(i=0;i<size;i++)
	{
	 printf(" %d ",ptr[i]);
	 if(i%10==0)
		 printf("\n");
	}
}

/**/

void dynamic_2d_array(int row,int column)
{
	int i,j,**ptr;

	ptr=(int**)malloc(row*sizeof(int*));

	for(i=0;i<row;i++)
	{
		ptr[i]=(int*)malloc(column*sizeof(int));
		for(j=0;j<column;j++)
			ptr[i][j]=(4*i+j);
	}

for(i=0;i<row;i++,printf("\n"))
	for(j=0;j<column;j++)
		printf(" %d ",ptr[i][j]);
}
