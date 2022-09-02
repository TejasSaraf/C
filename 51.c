#include <stdio.h>

void display(int arr[], int n, int m, int o)
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        arr[i] = n * i;
        arr[i] = m * i;
        arr[i] = o * i;
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", n, i, arr[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", m, i, arr[i]);
    }
    for (i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n", o, i, arr[i]);
    }
    printf("\n************************************************\n");
}
int main()
{
    int arr[3][10];
    int n, m, o;
    printf("Enter Number To Print Tabel:");
    scanf("%d", &n);
    printf("Enter Number To Print Tabel:");
    scanf("%d", &m);
    printf("Enter Number To Print Tabel:");
    scanf("%d", &o);

    display(arr[0], n, m, o);
    display(arr[1], n, m, o);
    display(arr[2], n, m, o);

    return 0;
}