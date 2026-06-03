#include <stdio.h>

int main()
{   
    int x,y;
    printf("Enter x and y value: ");
    scanf("%d%d",&x,&y);
    
    if(x == 0 && y == 0)
        printf("It is an origin!!!");
    else
    {
        if(x != 0 && y != 0)
        {
            if(x > 0 && y > 0)
                printf("First Quadrant!!!");
            else if(x < 0 && y > 0)
                printf("Second Quadrant!!!");
            else if(x < 0 && y < 0)
                printf("Third Quadrant!!!");
            else 
                printf("Fourth Quadrant!!!");
        }
        else 
        {
            if(x == 0)
                printf("Point[%d,%d] lie on the y axis only!!!",x,y);
            else
                printf("Point[%d,%d] lie on the x axis only!!!",x,y);
        }
    }
    return 0;
}