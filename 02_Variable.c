#include<stdio.h>
int main()
{
    int area,volume,radius,height;
    printf("Enter radius of circle:");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    printf("Area of circle:%d\n", area);
    printf("Enter radius of cylinder:");
    scanf("%d",&radius);
    printf("Enter height of cylinder:");
    scanf("%d",&height);
    volume = 3.14*radius*radius*height;
    printf("Volume of cylinder:%d",volume);
    
}