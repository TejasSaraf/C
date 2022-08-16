#include<stdio.h>
void convert(int c)
{
    float fah,f;
    f= c*1.8;
    fah=f+32;
    printf("The Temperature in fahrenheit is %f",fah);
}
int main()
{
    float c;
    printf("Enter Temperature in Celsius :");
    scanf("%f",&c);
    convert(c);
    return 0;
}