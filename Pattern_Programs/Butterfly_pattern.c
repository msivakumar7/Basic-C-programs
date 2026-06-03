#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);

	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= n-i+1; j++)
			printf("*");
		for(int k = 1; k <= (2*i) - 3;  k++)
			printf(" ");
		if(i != 1)
		{
			for(int j = 1; j <= n-i+1; j++)
				printf("*");
		}
		else
		{
			for(int j = 1; j <= n-1; j++)
				printf("*");
		}
		printf("\n");
	}
	for(int i = n-1; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
			printf("*");
		for(int k = 1; k <= (2*(n-i+1)) - 3;  k++)
			printf(" ");
		if(i != 1)
		{
			for(int j = 1; j <= i; j++)
				printf("*");
		}
		else
		{
			for(int j = 1; j <= 1; j++)
				printf("*");
		}
		printf("\n");
	}

}