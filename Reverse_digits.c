/******************************************************************************
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int r = 0, sum = 0;
    while(n != 0)
    {  
        r = n%10;
        sum =sum * 10 + r;
        n /= 10;
    }
    printf("%d",sum);
    //     int n;
    // scanf("%d",&n);
   
    // int a = n;
    // int r = 0, sum = 0;
    // int count = 0;
  
    // while(n != 0)
    // {  
    //     r = n % 10;
    //     n /= 10;
    //     count++;
    // }
    // count--;
    // while(a != 0)
    // {
    //     r = a % 10;
    //     sum = sum + (r*pow(10,count));
    //     a /= 10;
    //     count--;
    // }
    // printf("%d",sum);
    return 0;
}  
