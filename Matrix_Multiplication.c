#include <stdio.h>

int main()
{
    int r1,c1,r2,c2;
    
    printf("Enter the size of Matrix1:(row & column); ");
    scanf("%d%d",&r1,&c1);
    int M1[r1][c1];
    
    printf("Enter the size of Matrix2:(row & column); ");
    scanf("%d%d",&r2,&c2);
    int M2[r2][c2];
    
    printf("Enter Matrix1 Elements..\n");
    for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c1;j++)
            scanf("%d",&M1[i][j]);
    }
     printf("Enter Matrix2 Elements..\n");
     for(int i = 0;i < r1;i++)
    {
        for(int j = 0;j < c1;j++)
            scanf("%d",&M1[i][j]);
    }
    
    
    return 0;
}
