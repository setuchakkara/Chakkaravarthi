/*
 * sorting.c
 *
 *  Created on: 21-Mar-2020
 *      Author: Chakkaravarthi
 */

void fun_sort(int (*ptr)[5],int length)
{
	int i,j,temp;
	for(i=0;i<length;i++)
		for(j=i+1;j<length;j++)
		{
			if( *(*ptr+i)> *(*ptr+j))
			{
				temp=*(*ptr+i);
				*(*ptr+i) = *(*ptr+j);
				*(*ptr+j)=temp;
			}
		}
}


