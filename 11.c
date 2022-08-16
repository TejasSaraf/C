#include<stdio.h>
void display(int i)
{
    printf("The address of variable i :%u\n",&i);
}
int main()
{
    int i;
    printf("The address of variable i :%u\n",&i);
    display(i);
    return 0;
}