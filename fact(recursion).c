/******************************************************************************
*******************************************************************************/
#include <stdio.h>
int fact(int n)
{
    if(n == 0)
    return 1;
    
    return n * fact(n-1);
}

int main()
{
    int n,result;   
    scanf("%d",&n);

    result = fact(n);
    printf("%d",result);
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n = 5;
//     int result = 1;
//     for(int i = 1;i <= 5;i++)
//         result *= i;
//     printf("%d",result);
// }