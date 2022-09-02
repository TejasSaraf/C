#include<stdio.h>
int occurrence(int arr[],int size,int n)
{
    int i;
    int count =0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,size;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
    printf("Enter array elements:");
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    int l = occurrence(arr,size,n);
    printf("\nOccurence:%d",l);
    return 0;
}