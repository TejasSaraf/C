#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 0.18 + 32);
    printf("The value of celsius temperature in fahrenheit is %f fahrenheit", fahrenheit);
}