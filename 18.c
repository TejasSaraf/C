#include<stdio.h>
void printTable(int arr[], int n)
{
    int i=0;
    printf("Table of %d\n",n);
    for(i=1;i<=10;i++)
    {
        arr[i]=n*i;
    }
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,arr[i]);
    }
    printf("*****************************************************\n");
}
int main()
{
    int arr[3][10],n;
    printf("Enter Number to print Table:");
    scanf("%d",&n);
    printTable(arr[0],n);
    printf("Enter Number to print Table:");
    scanf("%d",&n);
    printTable(arr[1],n);
    printf("Enter Number to print Table:");
    scanf("%d",&n);
    printTable(arr[2],n);

    return 0;
}