#include<stdio.h>

int main()
{
	char str[20];
	scanf("%s",str);
	int i = 0;
	float l = 0.0;
	int sum = 0;
	while(str[i] != '\0')
	{
	    sum += str[i] - '0';
		l++;
		i++;
	}

	printf("output = %.2f",sum/l);
}