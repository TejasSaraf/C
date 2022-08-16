#include<stdio.h>
int main()
{
    int i=35;
    int *ptr;
    ptr =&i;
    printf("The address of variable is:%u\n",&i);
    printf("The value of variable i :%d",*ptr);
    return 0;
}