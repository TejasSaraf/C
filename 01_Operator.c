#include <stdio.h>
int main()
{
    int n = 97, num;
    printf("Enter Number:");
    scanf("%d", &num);
    if (num % n == 0)
    {
        printf("The number is divisible by %d", n);
    }
    else
    {
        printf("The number is not divisible by %d", n);
    }
    return 0;
}