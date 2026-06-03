#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of farm:");
    scanf("%d",&n);
    int tree;
    printf("Enter a tree number:");
    scanf("%d",&tree);
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < n;j++)
        {
            sum++;
            if(sum == tree)
            {
                if(i == 0 || i == n-1 || j == 0 || j == n-1)
                    printf("It is Mango tree!!!");
                else
                    printf("It is Coconut tree!!!");
            }
        }
    }
    return 0;
}
