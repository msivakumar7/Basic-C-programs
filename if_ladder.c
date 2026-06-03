
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number (10-50) :");
    scanf("%d",&n);
    if(n > 10 && n < 50)
    {
    if(n > 10)
     printf("Greater than 10\n");
    if(n > 20)
     printf("Greater than 20\n");
    if(n > 30)
     printf("Greater than 30\n");
    if(n > 40)
     printf("Greater than 40");
    }
    else
        printf("Out of the limit!!!");
    // if(n > 10 && n < 50)
    // {
    //     if(n > 40)
    //         printf("Greater than 10, Greater than 20,Greater than 30, Greater than 40");
    //     else if(n > 30)
    //         printf("Greater than 10, Greater than 20,Greater than 30");
    //     else if(n > 20)
    //         printf("Greater than 10,Greater than 20"); 
    //     else
    //         printf("Greater than 10");
    // }
    // else 
    //     printf("Out of the limit!!!");
    
    return 0;
}
