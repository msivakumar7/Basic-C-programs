#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int isprime = 1;
    for(int i = 2;i <= n/2; i++)
    {
        if(n%i == 0)
        {
            isprime = 0;
            printf("%d ",i);
        }
    }
    if(isprime)
    printf("It is a prime number!!!");
   
}
