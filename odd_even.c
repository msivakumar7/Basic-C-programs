#include <stdio.h>

int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     
     if(n >= 0 && n <= 10){
     switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("odd");
            break;
        default:
            printf("even");
            break; }
     }
     else
     printf("invalid");
     
    // if((n >= 0) && (n <= 10))  ----> mathematical method to find odd or even!!!
    // {   
    //     if((n/2)*2 == n)
    //     printf("It is a even number");
    //     else
    //     printf("It is an odd number");
    // }
    // else
    //      printf("Invalid input!!!");
    
    return 0;
}
