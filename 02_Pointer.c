#include <stdio.h>
int main()
{
    int i = 3;
    int *a;
    a = &i;
    printf("The value of variable i is %d\n", i);
    printf("The address of variable i is %u\n", &i);
    printf("The value of variable i is %d", *a);
    return 0;
}