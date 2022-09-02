#include <stdio.h>
void printTable(int *arr, int n)
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        arr[i] = n * i;
    }
}
int main()
{
    int i = 0, arr[20], n;
    printf("Enter Number To Print Table:");
    scanf("%d", &n);
    printTable(arr, n);
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", n, i, arr[i]);
    }
    return 0;
}