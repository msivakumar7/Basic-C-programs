
#include <stdio.h>

int main()
{
    int a,b;
    char c;
    printf("Enter 2 inputs: ");
    scanf("%d%d",&a,&b);
    printf("Enter your choice as operator...\n '+','-','*','/'\n");
    scanf(" %c",&c);
    switch(c)
    {
        case '+':
            printf("Addition = %d",a+b); 
            break;
        case '-':
            printf("Subtraction = %d",a-b); 
            break;
        case '*':
            printf("Multiplication = %d",a*b); 
            break;
        case '/':
            printf("Division = %d",a/b);
            break;
        default:
            printf("Nothing to say!!!"); 
    }
    return 0;
}