#include <stdio.h>
void display(int i)
{
    printf("The address of variable i is:%u\n", &i);
}
int main()
{
    int i = 35;
    printf("The address of i:%u\n", &i);
    display(i);
    return 0;
}