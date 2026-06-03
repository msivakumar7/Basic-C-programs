#include<stdio.h>
#include<string.h>
int main()
{
	char str[50] ;
	scanf("%s",str);
	char c;
	scanf(" %c",&c);
	int found = 1, len = strlen(str);
	len -= 1;
	while(len >= 0)
	{
		if(str[len] == c)
		{
			found = 0;
			printf("Output: %d\n",len);
			break;
		}
		len--;
	}   
	if(found)
		printf("Given character not found\n");
	return 0;
}