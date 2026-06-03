/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
	int r=3,c= 3;
	int a[r][c],b[r][c];
	printf("Enter matrix 1 elements:");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter matrix 2 elements:");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			scanf("%d",&b[i][j]);
	}
	printf("Matrix 1 Elements...\n");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("Matrix 2 Elements...\n");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	printf("Sum of Two matrix...\n");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
			printf("%d ",a[i][j] + b[i][j]);
		printf("\n");
	}



	return 0;
}
