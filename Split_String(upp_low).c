#include <stdio.h>

int main()
{
   char str[50];
   scanf("%s",str);
   int i = 0;
   printf("LowerCase characters....\n");
  while(str[i] != '$' && str[i] != '\0')
  {
      if(str[i] >= 'a' && str[i] <= 'z')
      printf("%c\n",str[i]);
      
      i++;
  }
  printf("\nUpperCase characters....\n");
  i = 0;
  while(str[i] != '$' && str[i] != '\0' )
  {
      if(str[i] >= 'A' && str[i] <= 'Z')
      printf("%c\n",str[i]);
      
      i++;
  }
    return 0;
}
