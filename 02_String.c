#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[20];
    char arr2[20];
    char c;
    int i=0;

    printf("Enter First String Name:");
    scanf("%s",arr1);
    printf("Enter Second String Characters to Print Name:\n");
    
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);

        arr2[i] = c;
        i++;
    }
    arr2[i-1] = '\0';
    printf("The First String Name is: %s\n",arr1);
    printf("The Second String Characters is: %s\n",arr2);

    c= strcmp(arr1,arr2);
    printf("strcmp for these strings return :%d",c);
    return 0;
}