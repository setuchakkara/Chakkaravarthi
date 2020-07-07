/*
 * find_next_no_same_ones.c
 *
 *  Created on: 08-May-2020
 *      Author: Chakkaravarthi
 */
#include "../test/test.h"

int next_higher(int n) {
int i= n;
int ones=0,zeros=0,onesc=0,zerosc=0, copy=n;

do
{
	do{
	onesc+=(copy&0x01);
	zerosc+=(~copy&0x01);
	copy=copy>>1;
	}while(copy>0);

	if(i==n)
	{
		ones=onesc;
		zeros=zerosc;
		onesc=zerosc=0;
	}
	if((ones==onesc)&&(zeros==zerosc))
		return i;

	copy=++i;
	onesc=0;
	zerosc=0;
}while(1);


}
