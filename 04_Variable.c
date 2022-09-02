#include <stdio.h>
int main()
{
    float si, p, r, t;
    printf("Enter principle:");
    scanf("%f", &p);
    printf("Enter rate of interest:");
    scanf("%f", &r);
    printf("Enter time period:");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest:%f", si);
}