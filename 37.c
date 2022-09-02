#include <stdio.h>
void present(char str[], char n)
{
    char *ptr = str;
    int flag = 0;
    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            printf("The character is present in String");
            flag++;
        }

        ptr++;
    }

    if (flag == 0)
    {
        printf("The character is not present in String");
    }
}
int main()
{
    char str[] = "Alice";
    present(str, 'A');
    return 0;
}