#include<stdio.h>
int main()
{
    int i,n;
    int isPrime = 1;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            isPrime =0;
        }
    }
    if(isPrime==1)
        {
            printf("Number is Prime");
        }
        else{
            printf("Number is Not Prime");
        }
    return 0;
}