#include <stdio.h>
int positiveIntegers(int arr[])
{
    int count = 0;
    for (int i = 0; i < arr[4]; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {1, 2, -3, -4, 5};
    positiveIntegers(arr);
    printf("The positive integers :%d", positiveIntegers(arr));
    return 0;
}