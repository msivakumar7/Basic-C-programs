#include <stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your string:");
    scanf("%s",str);
    int l = 0,j = 0;
    while(str[j] != '\0')
    {
        j++;
        l++;
    }
    int vowel = 0;
    for(int i = 0;i < l;i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        vowel++;
    }
    printf("Total Vowel count: %d",vowel);
    return 0;
}
