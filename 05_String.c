#include <stdio.h>
#include <string.h>
int main()
{
    char st1[20];
    char st2[20];
    char c;
    int a, i = 0;

    printf("Enter First String:");
    scanf("%s", st1);
    printf("Enter Second String:\n");
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i - 1] = '\0';

    printf("The First String is:%s\n", st1);
    printf("The Second String is:%s\n", st2);
    c = strcmp(st1, st2);
    printf("The two strings are equal:%d", c);
    return 0;
}