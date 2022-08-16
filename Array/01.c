#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++){
    printf("Enter element %d to store in array:",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("The array element %d is:%d\n",i+1,arr[i]);
    }
    return 0;
}