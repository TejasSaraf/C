#include<stdio.h>
int factorial(int n)
{
    int i,val=1;
    for(i=n;i>1;i--)
    {
        val*=i;
    }
    return val;
}

int factorialRecursive(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n * factorialRecursive(n-1);
    }
}
int main()
{
    int n,s;
    printf("Enter Number");
    scanf("%d",&n);
    // s = factorial(n);
    s=factorialRecursive(n);
    printf("The Factorial of number is:%d",s);
}