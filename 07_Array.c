#include <stdio.h>
void printTable(int *arr, int num, int n)
{
    int i;
    printf("Enter Number to Print Table :");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        arr[i] = num * (i + 1);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, (i + 1), arr[i]);
    }
    printf("*****************************************************************\n");
}
int main()
{
    int arr[3][10];
    printTable(arr[0], 2, 10);
    printTable(arr[1], 7, 10);
    printTable(arr[2], 9, 10);

    return 0;
}