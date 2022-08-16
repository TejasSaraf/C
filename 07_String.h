#include<stdio.h>
char *strcpy(char *t,const char *s)
{
    char *temp = t;
    while(*s!='\0'){
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
    return temp;
}
int main()
{
    char source[] = "Alice";
    char target[20];
    strcpy(target,source);
    puts(target);
    return 0;
}