#include <stdio.h>
int main()
{
    int i, n, prime = 1;
    printf("Enter number:");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("Number is not Prime");
    }
    else
    {
        printf("Number is Prime");
    }

    return 0;
}