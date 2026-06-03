/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *ptr;
    int a = 10;
    ptr = &a;
    int **n;
    n = &ptr;
   
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",n);
    printf("%d\n",*n);
    printf("%d",**n);
    
    return 0;
}
