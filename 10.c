#include<stdio.h>
int main()
{
    int a=4;
    int *ptr;
    ptr=&a;
    printf("The address of variable a :%u\n",&a);
    printf("The value of variable a:%d",*ptr);

    return 0;
}