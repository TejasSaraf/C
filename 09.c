#include<stdio.h>
void printSum(int n)
{
    if(n==1)
    {
        printf("*\n");
        return 0;
    }
    printSum(n-1);
    for(int i=0;i<2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int n=3;
    printSum(n);
    return 0;
}