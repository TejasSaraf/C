#include<stdio.h>
int strlen(char *c)
{
    char *ptr;
    int count=0;
    ptr=c;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    return count;
}
int main()
{
    char st[] = "Alice";
    int count = strlen(st);
    printf("The length of the string is:%d",count);
    return 0;
}