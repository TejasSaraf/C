#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter Number To Print Factorial:");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("The Factorial of Number %d is:%d", n, fact);
    return 0;
}