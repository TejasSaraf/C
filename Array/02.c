#include<stdio.h>
int main()
{
    int n,m,i,isCheck=0;
    printf("Enter Number to check present or not:");
    scanf("%d",&n);
    printf("Enter size of array:");
    scanf("%d",&m);
    int arr[m];
    for(i=0;i<m;i++)
    {
        arr[i]=i+1;
    }
    for(i=0;i<m;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<m;i++)
    {
        if(n==arr[i])
        {
            isCheck = 1;
            break;
        }
        else{
            isCheck = 0;
        }
    }
    if(isCheck==1)
        {
            printf("\nTrue");
        }
        else{
            printf("\nFalse");
        }
    return 0;
}