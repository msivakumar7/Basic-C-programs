#include <stdio.h>
void merge(int *arr, int m, int l,int r)
{
	int temp[r-l+1];
	int i = l, j = m+1,k = 0;
	while(i <= m && j <= r)
	{
		if(arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}

	while(i <= m)
		temp[k++] = arr[i++];

	while(j <= r)
		temp[k++] = arr[j++];

	for(i = 0; i < k; i++)
		arr[l+i] = temp[i];

}
void mergesort(int *arr,int low,int high)
{
    int mid;
	if(low < high)
	{
		mid = (low + high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);

		merge(arr,mid,low,high);
	}
}
int main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];

	for(int i = 0; i <n; i++)
		scanf("%d",&arr[i]);
		
	mergesort(arr,0,n-1);
	
	for(int i = 0; i <n; i++)
		printf("%d ",arr[i]);

	return 0;
}
