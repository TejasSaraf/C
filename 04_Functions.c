#include<stdio.h>
void sum(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
    {
        s+=i;
    }
    printf("The sum of N Natural Numbers is %d",s);
}
int main()
{
    int n;
    printf("Enter n Natural Numbers:");
    scanf("%d",&n);
    sum(n);
    return 0;
}