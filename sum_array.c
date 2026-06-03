#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i <n; i++)
		scanf("%d",&arr[i]);
	int target;
	printf("Enter a number that not to add in sum:");
	scanf("%d",&target);
	int sum = 0;01
	for(int i = 0; i < n; i++)
	{
		if(arr[i] != target)
			sum += arr[i];
	}
	printf("Total = %d",sum);
}

