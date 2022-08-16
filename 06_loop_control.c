#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        sum+=n*i;
    }
    printf("The sum of numbers occuring in multiplication table: %d",sum);
    return 0;
}