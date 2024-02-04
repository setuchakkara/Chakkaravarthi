#include <stdio.h>
#include <stdlib.h>
#include "../test/test.h"

List start = NULL;

void main()
{

create_list(10,2);
create_list(20,2);
create_list(30,2);
create_list(40,2);
create_list(50,2);
create_list_position(45,1);
display();
list_count();
list_search(35);

}

void create_list(unsigned int value,unsigned char option)
{
    List temp = (List)malloc(sizeof(struct Node));
    List prev = start;

    temp->info = value;
    if(start == NULL)       /*Insert first node*/
    {
      temp->link = NULL;
      start = temp;
    }
    else if( option == 1 ) /* List add at begining */
    {
      temp->link = start;
      start = temp;
    }
    else if (option == 2) /*List add at end */
    {
       while(prev->link!=NULL)
       prev=prev->link;

       prev->link = temp;
       temp->link = NULL;
    }
    else{

    }

}

/*Traversing linked list*/
void display()
{
    List temp = start;

    while(temp != NULL)
    {
      printf("%d ",temp->info);
      temp = temp->link;
    }
}

/* Count no of linked list node*/
void list_count()
{
    unsigned int count = 0;
    List temp = start;
    while(temp != NULL)
    {
      temp = temp->link;
      count++;
    }
    printf("\nnode count = %d \n",count);
}

/*Serch the element */
void list_search(unsigned int value)
{
    unsigned int count = 0;
    List temp = start;
    while(temp != NULL)
    {

      count++;
      if(temp->info == value)
      {printf("value found at posistion = %d \n",count);break;}
      temp = temp->link;
    }
    if(temp==NULL)
    {printf("value not found at any posistion \n");}

}


void create_list_position(unsigned int value,unsigned int position)
{
    List temp = (List)malloc(sizeof(struct Node));
    List prev = start,temp1;
    unsigned int count =0;
    temp->info = value;

    while(count<(position-1))
    {
        prev = prev->link;
        count++;
    }
    
    temp1 = prev->link;
    prev->link = temp;
   if(prev->link != NULL)
   {
    temp->link = temp1;
   }
   else{
     temp->link = NULL;
   }


}