/******************************************************************************
*******************************************************************************/
#include <stdio.h>

int main()
{
	int r=3,c= 3;
	int a[r][c],b[r][c],C[r][c];
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
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		    C[i][j] = 0;
	}
	printf("Multiplication of Two matrix...\n");
	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			for(int k = 0 ; k < r; k++)
				C[i][j] += (a[i][k]*b[k][j]);
		}
	}
    	for(int i  = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		    printf("%d ",C[i][j]);
		printf("\n");
	}


	return 0;
}

