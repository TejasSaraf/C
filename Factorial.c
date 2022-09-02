#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter Number to Print Factorial:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The Factorail of number %d is: %d", n, fact);
    return 0;
}