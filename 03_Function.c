#include<stdio.h>
void fibonacci(int n1,int n2, int num)
{
    int n3;
    for(int i=2;i<=num;i++)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
}

int main()
{
    int n1=0, n2=1,num;
    printf("Enter number of elements:");
    scanf("%d",&num);
    printf("The fibonacci series : %d %d ",n1,n2);
    fibonacci(n1,n2,num);
    return 0;
}