#include <stdio.h>
void fibonacci(int n1, int n2)
{
    int f;
    for (int i = 2; i < 20; i++)
    {
        f = n1 + n2;
        printf("%d ", f);
        n1 = n2;
        n2 = f;
    }
}
int main()
{
    int n1 = 0, n2 = 1;
    printf("Fibonacci series : %d %d ", n1, n2);
    fibonacci(0, 1);
    return 0;
}