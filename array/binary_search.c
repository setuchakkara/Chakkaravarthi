/*
 * binary_search.c
 *
 *  Created on: 21-Mar-2020
 *      Author: Chakkaravarthi
 */
#include "../test/test.h"

void binary_search(int (*ptr)[5],int length,int element,struct status *info)
{
	int first=0,last=length,middle=1;
	info->found =0;
	info->location=0;

	fun_sort(ptr,length);

   while((middle>0)&&(middle<length))
   {
	middle=(first+last)/2;
	if(*(*ptr+middle)==element)
	{
		info->found =1;
		info->location=middle;
		break;
	}
	else if(*(*ptr+middle)<element)
	{
		first=middle+1;
	}
	else
	{
		last=middle-1;
	}
   }
}




