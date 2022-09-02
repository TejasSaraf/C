#include <stdio.h>
int main()
{
    int n, i, arr[10];
    printf("Enter number to print Tabel:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        arr[i] = n * i;
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", n, i, arr[i]);
    }
    return 0;
}