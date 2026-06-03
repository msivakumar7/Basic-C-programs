/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    long n;
    printf("Enter a number:");
    scanf("%ld",&n);
    
    long mul = 1;
    for(long i = n;i > 0;i--)
        mul *= i;
    printf("%ld",mul);
    
    return 0;
}
