#include<stdio.h>
void minmax(int arr[],int n)
{
    int i;
    int max,min;
    if(n==1)
    {
        min=arr[0];
        max=arr[0];
    }
    else{
        if(arr[0]>arr[1])
        {
            max=arr[0];
            min=arr[1];
        }
        else{
            max=arr[1];
            min=arr[0];
        }
        for(i=2;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            else{
                min=arr[i];
            }
        }
    }
    printf("\nMin:%d\n",min);
    printf("Max:%d\n",max);
    
}
int main()
{
    int i,n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    minmax(arr,n);
    
    return 0;    
}