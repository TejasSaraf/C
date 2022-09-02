#include <stdio.h>
void main()
{
	int arr1[50][50], arr2[50][50], arr3[50][50], i, j, n;
	printf("Addition of two matrices:\n");
	printf("Enter size of square matrix:");
	scanf("%d", &n);

	printf("Enter elements of first matrix:");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Elements - [%d] , [%d] :", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("Enter elements of second matrix:");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Elements - [%d] , [%d] :", i, j);
			scanf("%d", &arr2[i][j]);
		}
	}

	printf("The First Matrix is:\n");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%d\t", arr1[i][j]);
		}
	}

	printf("The Second Matrix is:\n");
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("\nAddition of two Matrices :\n");
			for (i = 0; i < n; i++)
			{
				printf("\n");
				for (j = 0; j < n; j++)
				{
					printf("%d\t", arr3[i][j]);
				}
			}
		}
	}
}