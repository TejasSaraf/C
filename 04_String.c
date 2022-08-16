#include<stdio.h>
#include<string.h>

void swap(char ptr, char ptr2)
{
  char temp;
  temp=ptr;
  ptr=ptr2;
  ptr2=temp;
}

int main()
{
  char st1[20] = "Hello";
  char st2[20] = "World";
  printf("%s : %s\n", st1, st2);
  swap(st1, st2);
  printf("%s : %s\n", st1, st2);
  return 0;
}
