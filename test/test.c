
/*Program of Arithmatic Operation*/
/*Author:Chakkaravarthi*/
/*Basic Program written for testing */

#include <stdio.h>
#include <stdlib.h>
#include "test.h"
#include <string.h>
#define fun(x)(printf("%d",x))

char* printerError(char *s);
void *alphabet_position(char *text) {

text="Check";
text="s";
*text='a';
//printf("%c",text[0]);

}

int main(void)
{
	size_t arr[]={2, 2, 0, 3, 11, 8, 4, 4};
printf("%s",printerError("abcdeopqrstuvwxyz"));
return 0;
}


char* printerError(char *s) {
    char count=0,error1=0;// your code
    char *ptr = (char*)malloc(sizeof(char)*6);
  while(*s!='\0')
    {
    if(*s>'m')
      error1++;
    s++;
    count++;
  }
  if(count>0)
  {
	  asprintf(&ptr,"%d/%d",error1,count);
	  return ptr;
  }
  else
    return 0;
}
