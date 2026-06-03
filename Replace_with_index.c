#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i <n; i++)
		scanf("%d",&arr[i]);

	int ind,value;
	printf("Enter an index(0 - %d):",n-1);
	scanf("%d",&ind);

	printf("Enter a value to insert:");
	scanf("%d",&value);
	if(ind >= 0 && ind < n)
		arr[ind] = value;
	else
		printf("Enter correct index:");
	for(int i = 0; i <n; i++)
		printf("%d ",arr[i]);

	return 0;
}