#include<stdio.h>
void printSumAvg(int a, int b, int *sum, float *avg)
{
    *sum = a+b;
    *avg = *sum/2;
}
int main()
{
    int a,b,sum;
    float avg;
    printf("Enter Number 1:\n");
    scanf("%d",&a);
    printf("Enter Number 2:\n");
    scanf("%d",&b);
    printSumAvg(a,b,&sum,&avg);
    printf("Sum :%d\n",sum);
    printf("Average:%f",avg);
    return 0;
}