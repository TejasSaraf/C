#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("The pointer is pointing to same element in array");
    }
    else
    {
        printf("The pointer is pointing to different element in array");
    }
    return 0;
}