#include <stdio.h>
int main()
{
    int i, j;
    int houses = 0, k = 0, max = 0, times = 0, tst_case, temp = 0;
    long c[10000], s[10000];
    printf("Enter the number of test case:");
    scanf("%d", &tst_case);
    printf("Enter the number of houses:");
    printf("Enter the max number of candies in each box:");
    for (int l = 0; l < tst_case; l++)
    {
        scanf("%d", &houses);
    }
    for (i = 0; i < houses; i++)
    {
        scanf("%ld", &c[i]);
    }
    for (i = 0; i < houses; i++)
    {
        for (j = i + 1; j < houses; j++)
        {
            if (c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    max = 0;
    k = 0;
    for (i = 0; i < houses; i++)
    {
        max = max + c[i];
        s[k] = max;
        k++;
    }
    times = 0;
    printf("First House:");
    for (i = 1; i < k; i++)
        times = times + s[i];

    printf("%d\n", times);

    printf("Last House:");
    for (i = 1; i < k; i++)
        times = times + s[i];

    printf("%d\n", times);

    printf("Total Candies:");
    for (i = 1; i < k; i++)
        times = times + s[i];

    printf("%d\n", times);

    return 0;
}