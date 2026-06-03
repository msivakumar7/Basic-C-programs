/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	scanf("%s",str);
	int l = strlen(str);
	int min = str[0];            // implicit typecasting
	int i = 0;
	while(str[i] != '\0')
	{
		if(min > str[i])
			min = str[i];

		i++;
	}
	while(l--)
		printf("%c",min);

	return 0;
}