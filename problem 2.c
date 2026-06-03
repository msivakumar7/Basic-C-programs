
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int prime = 0;

    int i = 101;
    while(prime != n)
    {
        int isprime = 1;
        for(int j = 2;j <= (i/2);j++)
        {
            if(i%j == 0)
            isprime = 0;
        }
        if(isprime)
        {
        printf("%d ",i);
        prime++;
        }
        i++;
    }

    return 0;
}
