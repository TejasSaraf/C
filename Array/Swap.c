#include<stdio.h>
void swap(int arr[],int n)
{
    int *ptr=arr;
    int temp=0;
    int i;
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

}
int main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(i=0;i<n;i++)
    {
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    swap(arr,n);
    sortArray(arr,n);
    return 0;
}