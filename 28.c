#include<stdio.h>
int minimum(int arr[],int n)
{
    int i,min;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {2,3,44,5,6,7,1};
    int min = minimum(arr,7);
    printf("The Smallest Element in array is:%d",min);
    return 0;
}