/******************************************************************************
*******************************************************************************/
#include <stdio.h>
void insertAtBegin(int n,int* arr)
{
	int c = 1;
	while (c != 0)
	{
		printf("\nEnter your element to insert:");
		int element;
		scanf("%d",&element);
		for(int i = n-1; i >= 0; i--)
		{
			arr[i+1] = arr[i];
		}
		arr[0] = element;
		n++;
		for(int i = 0; i < n; i++)
			printf("%d ",arr[i]);
		printf("\nDo you want to continue:(1 or 0)");
		scanf("%d",&c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];

	for(int i = 0; i <n; i++)
		scanf("%d",&arr[i]);
	for(int i = 0; i <n; i++)
		printf("%d ",arr[i]);



	insertAtBegin(n,arr);
	return 0;
}
