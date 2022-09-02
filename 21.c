#include <stdio.h>

void display(int *a)
{
    printf("The value of variable to ten times of its current value:%d", 10 * (*a));
}
int main()
{
    int i = 2;
    printf("The current value of variable i:%d\n", i);
    display(&i);
    return 0;
}