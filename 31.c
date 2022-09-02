#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    int i = 0;
    char c;
    printf("Enter String:");
    scanf("%s", str1);

    printf("Enter Character by Character:");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    printf("The Str1 :%s\n", str1);
    printf("The Str2 :%s", str2);
    printf("The comparison of two strings:%d", strcmp(str1, str2));
    return 0;
}