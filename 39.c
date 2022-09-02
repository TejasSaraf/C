#include <stdio.h>

struct vector
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct vector v1, v2;
    printf("Enter Code:");
    scanf("%d", &v1.code);
    printf("Enter salary:");
    scanf("%f", &v1.salary);
    printf("Enter Name:");
    scanf("%s", v1.name);

    printf("Enter Code:");
    scanf("%d", &v2.code);
    printf("Enter salary:");
    scanf("%f", &v2.salary);
    printf("Enter Name:");
    scanf("%s", v2.name);

    printf("The code of v1:%d\n", v1.code);
    printf("The salary of v1:%f\n", v1.salary);
    printf("The name of v1:%s\n", v1.name);

    printf("The code of v2:%d\n", v1.code);
    printf("The salary of v2:%f\n", v1.salary);
    printf("The name of v2:%s\n", v1.name);
    return 0;
}