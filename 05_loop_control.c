#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    i=0;
    do
    {
        sum+=i;
        i++;
    }while(i<=n);
    printf("The value of sum(1 to 10) : %d",sum);
    return 0;
}