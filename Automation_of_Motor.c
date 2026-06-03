/*

*/
#include <stdio.h>
#include<unistd.h>


int main()
{
	int Upper_tank,Lower_tank; //
	int Max_TU = 95,Min_TL = 20;
	int Mtr = 0;
	int n = 1;


	while(1)
	{
		printf("Enter Upper_tank water level:");
		scanf("%d",&Upper_tank);
		printf("Enter Lower_tank water level:");
		scanf("%d",&Lower_tank);

		if(Lower_tank <= 20 || (Upper_tank > 30 && Upper_tank <= 95))
			printf("Pump off !!!");
		else
		{
			while((Upper_tank >= 30 || Upper_tank < 30) && Lower_tank > 20 && Upper_tank <= 95 )
			{
				if(n == 1) {
					printf("Start the Motor!!!");
					n--;
				}
				sleep(1);                                   // delay for 1 second
				Lower_tank--;
				printf("\nLower tank level: %d",Lower_tank);
				Upper_tank++;
				printf("\nUpper tank level: %d",Upper_tank);
				Mtr++;

				if(Lower_tank == 20)
				{
					printf("\nTotal litre = %d",Mtr);
					printf("\nStop the Motor!!!");
					break;
				}
			}
		}
		printf("\n");
	}
}
