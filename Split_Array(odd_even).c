#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int Even_size = 0;
	int arr[n];

	for(int i = 0; i < n; i++)
	{
		scanf("%d",(arr + i));
		if(arr[i]%2 == 0)
			Even_size++;
	}

	n = n - Even_size;
	int even[Even_size];
	int odd[n];

	int e = 0,o = 0;
	for(int i = 0; i < n+Even_size; i++)
	{
		if(arr[i]%2 == 0)
			even[e++] = arr[i];
		else
			odd[o++] = arr[i];
	}
	printf("Even_Array:\n");
	for(int i = 0; i < Even_size; i++)
		printf("%d ",even[i]);
	printf("\nOdd_Array:\n");
	for(int i = 0; i < n; i++)
		printf("%d ",odd[i]);

	return 0;
}
