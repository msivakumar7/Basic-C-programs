#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c = 0,x;
	while(n--)
	{
	    c++;
		x = pow(c,c);
		printf("%d ",x);
	}
	return 0;
}
