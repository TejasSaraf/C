#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The code of employee :%d\n", emp.code);
    printf("The salary of employee:%f\n", emp.salary);
    printf("The name of employee:%s\n", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 1000;
    strcpy(ptr->name, "Alice");

    show(e1);

    return 0;
}