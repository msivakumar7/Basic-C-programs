
#include <stdio.h>
#include<stdlib.h>
char *diamond (int n)
{
  char* pattern = malloc(n*n+n);
  int pos = 0;

    for(int i = 1;i <= n;i++)
    {
        for(int k = n-i;k >= 1;k--)
        {
          pattern[pos++] = ' ';
          pattern[pos++] = ' ';
        }
        for(int j = 1;j <= 2*i -1;j++)
       {
          pattern[pos++] = '*';
          pattern[pos++] = ' ';
        }
         pattern[pos++] = '\n';
    }
    for(int i = n-1;i >= 1 ;i--)
    {
        for(int k = i+1;k <= n ;k++)
       {
          pattern[pos++] = ' ';
          pattern[pos++] = ' ';
        }
        for(int j = 1;j <= 2*i -1;j++)
      {
          pattern[pos++] = '*';
          pattern[pos++] = ' ';
        }
    
       pattern[pos++] = '\n';
    }
    pattern[pos] ='\0';
	return pattern;
}
int main()
{
    int n ;
    scanf("%d",&n);
    printf("%s",diamond(n));
}