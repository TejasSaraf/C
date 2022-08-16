/* Write aprogram using a function which calculates the sum and average of two numbers. */
/* Use pointers and print the value of sum and average in main() */

#include<stdio.h>

void display(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum)/2;
    
}
int main()
{
    int x, y, sum;
    float avg;
    x = 10;
    y = 20;
    display(x, y, &sum, &avg);
    printf("The sum of x and y:%d\n",sum);
    printf("The avg of x and y:%f",avg);
    return 0;
}