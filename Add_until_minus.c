#include <stdio.h>

int main()
{
	int n = 0;
	int sum = 0;

    jmp:if(n >= 0)
    {
		scanf("%d",&n);
	    if(n > 0)
			sum += n;
		goto jmp;
    }
	
	printf("%d",sum);
	return 0;
}
