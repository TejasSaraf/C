#include <stdio.h>
int main()
{
    int area, length, breadth;
    printf("Enter length of rectangle:");
    scanf("%d", &length);
    printf("Enter breadth of rectangle:");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("Area of rectangle:%d", area);
}