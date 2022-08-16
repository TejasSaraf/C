#include<stdio.h>
int stlen(char str[],int n)
{
    char *ptr=str;
    int len=0;
    while(*ptr!='\0')
    {
        len++;
        ptr++;
    }
    return len;

}
int main()
{
    char str[] = {'A','l','i','c','e','\0'};
    int l=stlen(str,5);
    printf("The length of string:%d",l);
    return 0;
}