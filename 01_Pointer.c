#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("The value of x and y before swap %d and %d\n", x, y);
    swap(&x, &y);
    printf("The value of x and y after swap %d and %d", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}