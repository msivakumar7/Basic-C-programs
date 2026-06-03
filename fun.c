#include <stdio.h>
#include<unistd.h>

void Start_Motor()
{
    printf("\nStart The Motor!!!");
}

void Stop_Motor()
{
    printf("\nStop The Motor!!!");
}

int main()
{
	int Upper_tank,Lower_tank; 
	int Mtr = 0;
	int n = 1;

	while(1)
	{
		printf("Enter Upper_tank water level:");
		scanf("%d",&Upper_tank);
		printf("Enter Lower_tank water level:");
		scanf("%d",&Lower_tank);
		
		if(Lower_tank <= 20 || (Upper_tank > 30&& Upper_tank <= 95))
			printf("Motor Off!!!");
		else
		{
			while((Upper_tank >= 30 || Upper_tank < 30) && Lower_tank > 20 && Upper_tank <= 95 )
			{
				if(n-- == 1) 
				Start_Motor();
				
				sleep(1); // delay for 1 second
               
                Lower_tank--;
				printf("\nLower tank level: %d",Lower_tank);
				Upper_tank++;
				printf("\nUpper tank level: %d",Upper_tank);

				if(Lower_tank == 20)
					Stop_Motor();
			}
		}
		printf("\n");
	}
}
