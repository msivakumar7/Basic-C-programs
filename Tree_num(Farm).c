#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int farm[n][n];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            {
                if(i == 0 || i == (n-1) || j == 0 || j ==(n-1))
                    farm[i][j] = 1;
                else
                    farm[i][j] = 2;
            }
    }
    int tree;
    printf("Enter Tree number:");
    scanf("%d",&tree);
    int sum = 0;
     for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
            {
                sum++;
                if(sum == tree)
                {
                    if(farm[i][j] == 1)
                        printf("It is Mango Tree!!!");
                    else
                        printf("It is Coconut Tree!!!");
                }
            }
    }
    return 0;
}
