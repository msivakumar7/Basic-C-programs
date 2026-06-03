/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    scanf("%s",str);
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        printf("%c",str[i]+32);
        
        else if(str[i] >= 'a' && str[i] <= 'z')
        printf("%c",str[i]-32);
       
       i++;
    }
    
    return 0;
}
