#include <stdio.h>
void position(char str[], int a, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (str[i] == a)
        {
            printf("Position of character:%d", i + 1);
            break;
        }
    }
}
int main()
{
    char a = 'l';
    char str[] = "Alice";
    position(str, a, 5);

    return 0;
}