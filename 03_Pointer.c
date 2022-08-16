#include<stdio.h>

void display(int a)
{
    printf("The address of variable i is %u\n", &a);
}
int main()
{
    int i;
    printf("The adderss of variable i is %u\n", &i);
    display(i);
    return 0;
}