#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter Number To Print Factorial:");
    scanf("%d",&n);
    i=1;
    do
    {
        fact*=i;
        i++;
    }while(i<=n);
    printf("The factroial of Number %d is:%d",n,fact);
    return 0;
}
