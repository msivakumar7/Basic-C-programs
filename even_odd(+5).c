#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int sum  = 0;
	printf("0 ");
	for(int i = 2; i <= n; i++)
	{
		if(i&1)
		{
			sum += 5;
			printf("%d ",sum);
		}
		else
			printf("%d ",i);
	}
	return 0;
}
