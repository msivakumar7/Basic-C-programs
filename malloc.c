#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *ptr;
	ptr = (int *)malloc(n*sizeof(int)); //**It get memory from heap,
	//because we can't able to access heap memory directly!!!**

	for(int i = 0; i <n; i++)
		scanf("%d", &*(ptr + i) ); // &arr[i] ---> &*(arr + i)  | &ptr[i] ---> &*(ptr + i)
	for(int i = 0; i <n; i++)
		printf("%d ",*(ptr + i));  //  arr[i] --->  *(arr + i)

	free(ptr);// **Once the purpose of memory usage in heap ,
	//  then we must delete those memory access!!!
	// because Returns the allocated heap memory back to the OS --> reuse purpose**
}