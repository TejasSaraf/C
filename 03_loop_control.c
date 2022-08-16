#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    
    for(i=0; i<=n; i++)
    {
        sum+=i;   
    }
    printf("The value of sum (1 to 10) :%d",sum);
    return 0;

}