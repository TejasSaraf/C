#include <stdio.h>
void display(int arr[], int n)
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        arr[i] = n * i;
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", n, i, arr[i]);
    }
}
int main()
{
    int arr[10];
    display(arr, 5);
    return 0;
}