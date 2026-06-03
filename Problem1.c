#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i = 0;
	long prev = 100;
	int count = 0;
	while(n--)
	{
		if(count == 3)
		{
			i = prev - 100;
			i--;
			printf("%d ",prev + i);
			prev = prev + i;
			count = -1;
		}
		else
		{
			i = prev - 100;
			i++;
			prev = prev + i;
			printf("%ld ",prev);
		}
		count++;
	}

	return 0;
}