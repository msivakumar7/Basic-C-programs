#include <stdio.h>

int main()
{
	int n;
	int r;
	int sum = 0;
	scanf("%d",&n);
    float d = 0;
	while(n)
	{
		r = n%10;
		sum += r;
		n /= 10;
		d++;
	}
	printf("%.int32_tf",sum/d);

	return 0;
}
