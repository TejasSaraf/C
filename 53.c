#include<stdio.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    for(int i=0; i<6; i++)
    {
        printf("Enter the value of %d element:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<6; i++)
    {
        printf("The value of %d element is: %d\n",i,ptr[i]);
    }
    return 0;
}