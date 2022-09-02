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
    printf("\n************************************************\n");
}
int main()
{
    int arr[3][10];

    display(arr[0], 2);
    display(arr[1], 7);
    display(arr[2], 9);

    return 0;
}