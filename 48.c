#include<stdio.h>

int positiveIntegers(int arr[],int n)
{
    int count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            count++;
        }
    }
    return count;
}

int negativeIntegers(int arr[],int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {-1,-2,-3,-4,-5};
    int l = positiveIntegers(arr,5);
    int k = negativeIntegers(arr,5);
    printf("The positive integers are:%d\n",l);
    printf("The negative integers are:%d",k);

    return 0;
}