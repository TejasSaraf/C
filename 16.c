#include<stdio.h>
void printTable(int arr[], int num)
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        arr[i]=num*i;
    }
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",num,i,arr[i]);
    }

}
int main()
{
    int num,arr[10];
    printf("Enter number to print table:");
    scanf("%d",&num);
    printTable(arr ,num);
    return 0;
}