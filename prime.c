#include <stdio.h>

int main()
{
    int i1,i2;
    
    printf("Enter 2 interval:");
    scanf("%d%d",&i1,&i2);
    
    int op = 0;
    for(int i = i1;i <= i2;i++)
    {
        for(int j = 2;j <= (i/2);j++)
        {
            if(i%j == 0)
            op =1;
        }
        if(!op && i != 1)
        printf("%d ",i);
        op = 0;
    }
    return 0;
}
