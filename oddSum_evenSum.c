
#include <stdio.h>

int main()
{
	int n = 0;
	int odd_sum = 0, even_sum = 0;
	while(n >= 0)
	{
		scanf("%d",&n);
		
		if(n&1 && n > 0)
			odd_sum += n;
		else if((n%2 == 0) && (n > 0))
			even_sum += n;
	}
	printf("%d,%d",odd_sum,even_sum);
	return 0;
}
