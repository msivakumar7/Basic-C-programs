#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p=0,rem,result = 0;
    while(n)
    {
        rem =  n%10;
        if(rem == 1)
        result += rem*pow(2,p);
        p++;
        n = n/10;
    }
    printf("Output = %d",result);
}