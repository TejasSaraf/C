#include<stdio.h>
int main()
{
    int arr[2][3][4];
    int *ptr;
    ptr = &arr[2][3][4];
    printf("The address of three dimensional array is %u", ptr);   
}