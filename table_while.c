
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = 1;
    int c = 10;
    while(c--)
    {
        printf("%d * %d = %d\n",i,n,i*n);
        i++;
    }
    
    return 0;
}
