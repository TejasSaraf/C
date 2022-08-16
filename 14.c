#include<stdio.h>
int main()
{
    int i=5;
    int *ptr;
    int **ptr1;
    ptr=&i;
    ptr1=&ptr;
    printf("The value of a:%d",**ptr1);
    return 0;
}