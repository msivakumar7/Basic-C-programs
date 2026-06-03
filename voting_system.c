#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isDuplicate(char reg[][15],char r[],int i) {
	for(int j = 0; j < i; j++)
	{
		if(strcasecmp(reg[j],r) == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char reg[65][15],r[15];
	int c1 = 0,c2 = 0,c3 = 0,c4 = 0,c5 = 0,vote;
	int i = 0;   // count number of people voted!!!
	int n = 1;
	int nota = 0;
	int let;
	
	while(n != 0)
	{
		do {
			let = 0;
			printf("Enter your Register Number: ");
			scanf("%s",r);
			if(isDuplicate(reg,r,i))
			{
				printf("This register number already voted!!!***\n");
				let = 1;
			}
		} while(let);
		
		printf("Canditates list...\n1)Priya\n2)Ratheesh\n3)Janani\n4)Architha\n5)Rahman\n6)NOTA\n");
		while(1)
		{
			printf("Enter a number to choose your Canditate:");
			if(scanf("%d",&vote) == 1 && (vote >= 1 && vote < 7))
				break;

			while(getchar() != '\n');
			printf("Invalid choice,Enter correct number to choose!!!\n");

		}
		switch(vote)
		{
		case 1:
			c1++;
			strcpy(reg[i++],r);
			break;
		case 2:
			c2++;
			strcpy(reg[i++],r);
			break;
		case 3:
			c3++;
			strcpy(reg[i++],r);
			break;
		case 4:
			c4++;
			strcpy(reg[i++],r);
			break;
		case 5:
			c5++;
			strcpy(reg[i++],r);
			break;
		case 6:
			nota++;
			strcpy(reg[i++],r);
			break;
		default:
			printf("Enter correct canditate number,INVALID CANDITATE NUMBER!!!!***\n");
			break;
		}
		do {
			printf("\nEnter 1 to continue: ");
			if(scanf("%d",&n) == 0)
			{
				while(getchar() != '\n');
				printf("Invalid input,Next time enter 1 to continue\n");
				n = 1;
				continue;
			}
		} while(n != 1 && n != 0);
		printf("\n");

	}

	printf("------------------------------\n");
	printf("Totally Voted people count: %d\n",i);
	printf("Voted people register numbers:\n");
	for(int j = 0; j < i; j++)
		printf("%s\n",reg[j]);

	printf("PRIYA\t: %d VOTES\n",c1);
	printf("RATHEESH: %d VOTES\n",c2);
	printf("JANANI\t: %d VOTES\n",c3);
	printf("ARCHITHA: %d VOTES\n",c4);
	printf("RAHMAN\t: %d VOTES\n",c5);
	printf("NOTA\t: %d VOTES\n",nota);

	if(c1 > c2 && c1 > c3 && c1 > c4 && c1 > c5)
	{
		printf("\nPRIYA GOT %d VOTES\n",c1);
		printf("PRIYA IS THE WINNER!!!");
		if(nota >= c1)
			printf("\nNOTA also have High voting count !!!\n");
	}
	else if(c2 > c3 && c2 > c4 && c2 > c5)
	{
		printf("\nRATHEESH GOT %d VOTES\n",c2);
		printf("RATHEESH IS THE WINNER!!!");
		if(nota >= c2)
			printf("\nNOTA also have High voting count !!!\n");
	}
	else if(c3 > c4 && c3 > c5)
	{
		printf("\nJANANI GOT %d VOTES\n",c3);
		printf("JANANI IS THE WINNER!!!");
		if(nota >= c3)
			printf("\nNOTA also have High voting count !!!\n");
	}
	else if(c4 > c5)
	{
		printf("\nARCHITHA GOT %d VOTES\n",c4);
		printf("ARCHITHA IS THE WINNER!!!");
		if(nota >= c4)
			printf("\nNOTA also have High voting count !!!\n");
	}
	else
	{
		printf("\nRAHMAN GOT %d VOTES\n",c5);
		printf("RAHMAN IS THE WINNER!!!");
		if(nota >= c5)
			printf("\nNOTA also have High voting count !!!\n");
	}
	return 0;
}