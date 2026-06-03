#include <stdio.h>

int main()
{
	int n;
	int n1 = 0, n2 =1;
	int n3;
	scanf("%d",&n);

	if(n == 1)
		printf("%d",n1);
	else if(n <= 0 )
		printf("Nothing!!!");
	else
	{
		printf("%d %d ",n1,n2);
		for(int i = 1; i <= n-2; i++)
		{
		    n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			printf("%d ",n3);
		}
	}

	return 0;
}