#include<stdio.h>
void average(int a, int b, int c)
{
    float sum,avg;
    sum = a+b+c;
    avg = sum/2;
    printf("The average of three numbers :%f",avg);

}

int main()
{
    int a,b,c;
    average(1,2,7);
    return 0;
}