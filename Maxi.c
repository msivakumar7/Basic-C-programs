#include <stdio.h>

int main()
{
    int n = 0;
    int c;
    scanf("%d",&c);
    int max = 0;
     while(c--)
     {
         scanf("%d",&n);
         if(n > max)
         max = n;
     }
     printf("%d",max);
    return 0;
}
