#include <stdio.h>

void display(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (*sum) / 2;
}
int main()
{
    int a = 10, b = 20, sum;
    float avg;
    display(a, b, &sum, &avg);
    printf("Sum=%d\n", sum);
    printf("Average=%f", avg);
    return 0;
}