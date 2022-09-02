#include <stdio.h>
int strlen(char *arr)
{
    char *ptr = arr;
    int len = 0;
    int i = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char arr[] = "Alice";
    int l = strlen(arr);
    printf("The length of the string is: %d", l);
    return 0;
}