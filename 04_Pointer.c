/* Write a program to change the value of a variable to 10 times of its current value. */
/* Write a function and pass the value by reference */

#include <stdio.h>

void display(int *a)
{
    int temp;
    temp = 10 * (*a);
    printf("The value of i 10 times the current value:%d", temp);
}

int main()
{
    int i = 2;
    int *ptr;
    ptr = &i;
    printf("The current value of i :%d\n", i);
    display(ptr);
    return 0;
}