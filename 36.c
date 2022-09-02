#include <stdio.h>
int occurance(char str[], char n)
{
    int count = 0;
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == n)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[] = "Alice";
    int l = occurance(str, 'i');
    printf("%d", l);
    return 0;
}