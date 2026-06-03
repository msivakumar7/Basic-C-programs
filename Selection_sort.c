#include <stdio.h>

int main()
{
 int n;
 printf("Enter a size: ");
 scanf("%d",&n);
    int arr[n];
    
    for(int i = 0;i <n ;i++)
    scanf("%d",&arr[i]);
    for(int i = 0;i <n ;i++)
    printf("%d ",arr[i]);
    int j;
    
    for(int i = 0;i < n-1;i++)
    {
        int min = i;
        for(j = i+1; j < n;j++)
        {
            if(arr[j] < arr[min])
            min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("\n");
    for(int i = 0;i <n ;i++)
    printf("%d ",arr[i]);
        return 0;
}
