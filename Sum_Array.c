#include <stdio.h>

int main()
{
	int n1,n2;
	printf("Enter 1st array size:");
	scanf("%d",&n1);
	int arr1[n1];
	for(int i = 0; i <n1; i++)
		scanf("%d",&arr1[i]);

	printf("Enter 2nd array size:");
	scanf("%d",&n2);

	int arr2[n2];
	for(int i = 0; i <n2; i++)
		scanf("%d",&arr2[i]);
		
int a = 0;
    if(n1 < n2)
       a = 1;
    if(a)
        n2 = n1;
        
	printf("Sum of Array Elements...\n");
	for(int i = 0; i < n2; i++)
	{
		for(int j = 0; j < n2; j++)
		{	
		    if(i == j)
				printf("%d ",arr1[i] + arr2[i]);
		}
	}
	return 0;
}
