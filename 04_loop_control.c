#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter Number:");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("The value of sum(1 to 10) : %d",sum);
    return 0;
}