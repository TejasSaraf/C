#include<stdio.h>
void fibonacci(int a,int b,int n)
{
    int i,c;
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
int main()
{
    int n1=0,n2=1,n;
    printf("Enter Number to Print Fibonacci series:");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d ",n1,n2);
    fibonacci(n1,n2,n);
    return 0;
}