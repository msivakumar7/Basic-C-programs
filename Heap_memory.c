#include <stdio.h>
#include<stdlib.h>

int main()
{
	int n = 5;
	int arr[]= {1,2,3,4,5};
	printf("Stack Registers!!!\n");
	for(int i = 0; i <n; i++)
		printf("%d ",&arr[i]);

	printf("\nHeap Registers!!!\n"); /*   */
	int *ptr;
	ptr =malloc(n*sizeof(int));

	for(int i = 0; i <n; i++)
		printf("%d ",ptr + i);
	printf("\n");

	for(int i = 0; i <n; i++)
		scanf("%d",&*(ptr + i));
	for(int i = 0; i <n; i++)
		printf("%d ",*(ptr + i));
	return 0;
}
