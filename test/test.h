/*
 * test.h
 *
 *  Created on: 21-Mar-2020
 *      Author: Chakkaravarthi
 */

#ifndef TEST_TEST_H_
#define TEST_TEST_H_

#include <stdio.h>
struct status
{
  unsigned char found;
  unsigned int location;
};

typedef enum
{
	False=0,
	True=1
}flag;

struct Node{
unsigned int info;
struct Node *link;
};

typedef struct Node* List; 
 

void fun1();
void fun2();
void fun3();
void fun_sort(int(*)[],int);
void binary_search(int (*)[],int ,int ,struct status *);
flag prime_number(int );
int reverse_number(int );
void dynamic_1d_array(int );
void dynamic_2d_array(int ,int );
char findMissingLetter(char array[], int arrayLength);
int next_higher(int n) ;
void create_list(unsigned int value,unsigned char option);
void display(void);
void list_count(void);
void list_search(unsigned int value);
void create_list_position(unsigned int value,unsigned int position);
#endif /* TEST_TEST_H_ */
