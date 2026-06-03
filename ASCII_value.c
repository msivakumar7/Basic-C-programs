#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    
    if(n >= 'a' && n <= 'z')
    printf("%d",(n - 'a') + 1);
    else if(n >= 'A' && n <= 'Z')
    printf("%d",(n - 'A') + 1);
    else
    printf("%c",n);
  
    return 0;
}
