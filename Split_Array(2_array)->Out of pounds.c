#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int Even_size = 0;
	int size = 1;
    int odd[size];
    int even[size];
	int o = 0,e = 0,a;
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a);
		if(a%2 == 0)
		{
		    even[e++] = a;
		    Even_size++;
		}
		else
		    odd[o++] = a;
	}
	
	printf("Even_Array:\n");
	for(int i = 0; i < Even_size; i++)
		printf("%d ",even[i]);
	printf("\nOdd_Array:\n");
	for(int i = 0; i < n-Even_size; i++)
		printf("%d ",odd[i]);
	return 0;
}
