#include <stdio.h>

int main()
{
	int age;
	char country;

	printf("Enter your age:");
	scanf("%d",&age);

	printf("Enter your country:");
	scanf(" %c",&country);

	if(age >= 18 && (country == 'i' || country == 'I'))
		printf("you are eligible to vote in India !!!");
	else
		printf("You are not eligible to vote in India !!!\n");
	
	if(age >= 18 && (country == 'a' || country == 'A'))
	    printf("You  are eligible to vote in America !!!");
	

}