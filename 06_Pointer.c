/* Write a program to print the value of a variable i by using "pointer to pointer" type of variable */

#include<stdio.h>
int main()
{
    int i = 5;
    int *ptr;
    int **ptr_2;
    ptr = &i;
    ptr_2 = &ptr;

    printf("The value of i :%d",**ptr_2);

}