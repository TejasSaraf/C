#include <stdio.h>
void sum(int n)
{
    int i, s = 0;
    for (i = 0; i <= n; i++)
    {
        s += i;
    }
    printf("The sum of n Natural Numbers : %d", s);
}
int main()
{
    int n;
    printf("Enter Number to Print Sum:");
    scanf("%d", &n);
    sum(n);
    return 0;
}