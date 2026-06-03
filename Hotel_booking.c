#include<stdio.h>

int main()
{
    float room;
    int month;  
    float std_room_rent = 1000.0;
    float spl_rent;
    
    printf("Enter Number of rooms required: ");
    scanf("%f",&room);
    
    printf("Enter current month(1-12):");
    scanf("%d",&month);
    
    if((month > 0) && (month <= 12))
    {
     if(month == 1 || month == 4 || month == 11 || month == 12)
        {
         spl_rent = (0.3 * std_room_rent) + std_room_rent;
         printf("Total amount to pay: %.2f",room*spl_rent);
        }
     else
        printf("Total amount to pay: %.2f",room*std_room_rent);
    }
    else
     printf("Invalid_Month...Enter correct Month!!!");
}