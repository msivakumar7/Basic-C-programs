#include <stdio.h>
void ptr1(int *b)
{
    *b = 100;
    printf("\n%d",*b);
}
int main()
{
    int *ptr ;
    int n;
    ptr = &n;
    int **s ;
    *s = ptr;
    scanf("%d",&n);
    
     ptr1(&n);
    
    printf("\n%d",ptr);
    printf("\n%d",&n);
    
    printf("\n%d",n);
    
    ptr1(&n);
     
     printf("\n%d",n);
    
    return 0;
}