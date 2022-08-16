// Dutch National Flag Algorithm
#include <stdio.h>
void swap(int *a, int *b);
void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(&arr[low++], &arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&arr[mid], &arr[high--]);
            break;
        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int i, n;
    printf("Enter Size of Array:");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Array Elements:");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    sort(arr, n);
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}