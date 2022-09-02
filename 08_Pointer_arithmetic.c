#include <stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The address of i %u\n", ptr);
    ptr = ptr + 1;
    printf("The address of i %u", ptr);
}