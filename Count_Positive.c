#include <stdio.h>
int countpositiveint(int *arr, int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            count++;
    }
    return count;
}

int countnegativeint(int *arr, int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            count++;
    }
    return count;
}

void printArray(int *arr, int n)
{
    int i;
    printf("Array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10] = {1, 2, 3, 4, -5, 6, 7, 8, 9, -10};
    printArray(arr, 10);
    countpositiveint(arr, 10);
    countnegativeint(arr, 10);
    printf("Number of positive integers in array : %d\n", countpositiveint(arr, 10));
    printf("Number of Negative integers in array : %d\n", countnegativeint(arr, 10));
    return 0;
}
