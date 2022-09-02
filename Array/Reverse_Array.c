#include<stdio.h>
void reverse(int arr[],int n)
{
    int i;
    int temp=0;
    for(i=0;i<(n/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("\nReversed Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    reverse(arr,n);
    return 0;
}