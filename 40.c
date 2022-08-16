#include<stdio.h>
typedef struct vector{
    int x;
    int y;
}vec;

vec sumVector(vec v1,vec v2)
{
    vec result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}

int main()
{
    vec v1,v2,sum;
    v1.x=5;
    v1.y=10;
    v2.x=8;
    v2.y=6;
    sum = sumVector(v1,v2);
    printf("The dim of x is %d \n The dim of y is %d",sum.x,sum.y);
    return 0;
}