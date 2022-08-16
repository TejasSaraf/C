#include<stdio.h>
void encrypt(char str[],int n)
{
    char *ptr=str;
    while(*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
}
int main()
{
    char str[] = "Alice";
    encrypt(str,5);
    printf("The encrypted string is:%s",str);
    return 0;
}