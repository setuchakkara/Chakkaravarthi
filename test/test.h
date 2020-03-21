/*
 * test.h
 *
 *  Created on: 21-Mar-2020
 *      Author: Chakkaravarthi
 */

#ifndef TEST_TEST_H_
#define TEST_TEST_H_

struct status
{
  unsigned char found;
  unsigned int location;
};
void fun1();
void fun2();
void fun3();
void fun_sort(int(*)[],int);
void binary_search(int (*)[],int ,int ,struct status *);
#endif /* TEST_TEST_H_ */
