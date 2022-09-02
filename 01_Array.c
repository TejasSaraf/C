#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr = &arr[0];
    ptr = ptr + 2;

    if(ptr == &arr[2])
    {
        printf("The pointer points to the third element of array!", ptr);
    }
    return 0;
} 