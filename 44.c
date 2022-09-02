#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr = arr;
    ptr = ptr + 2;
    if (*ptr == arr[2])
    {
        printf("It points to the same loation of array");
    }
    return 0;
}