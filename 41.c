#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e[10];
    struct employee *ptr;
    ptr=e;
    // (*ptr).code=101;
    ptr->code=101;
    printf("%d",e[0].code);

    return 0;
}