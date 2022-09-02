#include <stdio.h>
void sum(int a)
{
    int i, s = 0;
    for (i = 0; i <= a; i++)
    {
        s += i;
    }
    printf("The sum of N Natural Numbers:%d", s);
}
int main()
{
    int n;
    printf("Enter Any Natural Number To Print Sum:");
    scanf("%d", &n);
    sum(n);
    return 0;
}