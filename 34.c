#include<stdio.h>
#include<string.h>
char stcpy(char *target,char *source)
{
    char *temp;
    temp=target;
    while(*source!='\0')
    {
        *target=*source;
        target++;
        source++;
    }
    *target='\0';
    return temp;
}
int main()
{
    char source[] = "Alice";
    char target[30];
    stcpy(target,source);
    printf("The Target String is:%s",target);
    return 0;
}