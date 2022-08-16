#include<stdio.h>
int main()
{
    int i,n,prime=1;
    printf("Enter Number:");
    scanf("%d",&n);
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            prime=0;
            i++;
            break;
        }
    }
    if(prime==0)
    {
        printf("Number is Not Prime");
    }
    else
    {
        printf("Number is Prime");
    }
    return 0;
}