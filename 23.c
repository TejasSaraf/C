#include <stdio.h>
int main()
{
    int i = 2;
    int *ptr1;
    int **ptr2;

    ptr1 = &i;
    ptr2 = &ptr1;
    printf("The value of variable i is:%d", **ptr2);
    return 0;
}