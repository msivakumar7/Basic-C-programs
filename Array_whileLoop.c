    #include <stdio.h>
    
    int main()
    {
        int n;
        printf("Enter the size of the array:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter array elements:");
        int i = 0;
        int a = n;
        while(n--)
        {
        scanf("%d",&arr[i]);
        i++;
        }
        i = 0;
        while(a--)
        {
          printf("Address = %d, Address(Hexa) = %x, Index = %d, Value = %d\n",&arr[i],&arr[i],i,arr[i]);
        i++;
        }
        
    }