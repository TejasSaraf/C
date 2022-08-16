#include<stdio.h>
int main()
{
    int i=2,n,prime=1;
    printf("Enter Number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            prime=0;
            i++;
            break;
        }
    }while(i<n);
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