#include "../test/test.h"
char findMissingLetter(char array[], int arrayLength)
{
  int i;
  char temp=array[0];
  for(i=0;i<arrayLength;i++,temp++)
  {
    if(temp!=array[i])
    return temp;
  }

  return (array[0]-1);
}
