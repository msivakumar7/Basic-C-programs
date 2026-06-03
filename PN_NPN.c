/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
	int n,sqr;
	scanf("%d",&n);
	sqr = sqrt(n);
	if(sqr*sqr == n)
		printf("PN");
	else
		printf("NPN");
	return 0;
}