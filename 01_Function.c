#include<stdio.h>
void average(int a, int b, int c)
{
    float avg,sum;
    sum=a+b+c;
    avg=(sum)/3;
    printf("The Average of three numbers :%f",avg);


}
int main()
{
    int a,b,c;
    average(1,2,8);
    return 0;
}