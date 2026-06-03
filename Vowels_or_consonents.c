#include <stdio.h>

int main()
{
    char n;
    printf("Enter a character:");
    scanf("%c",&n);
    
    if((n <= 'a' && n >= 'z') && (n <= 'A' && n >= 'Z'))
    {
    if(n == 'a' || n == 'e' || n == 'i' || n == 'o' ||n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' ||n == 'U')
    printf("It is Vowel!!!");
    else
    printf("It is Consonent!!!");
    }
    else
    printf("It is not an alphabet!!!");
    
    return 0;
}
