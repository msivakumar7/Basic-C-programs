/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);

if((a<=25)&&(b<=25)&&(c<=25)&&(d<=25))
{
    int sum = a+b+c+d;
    printf("sum = %d\n",sum);
    
    if(sum >= 90)
    printf("A grade");
    else if(sum >= 80)
    printf("B grade");
    else if(sum >= 70)
    printf("C grade");
    else
    printf("D grade");
    
}
else
    printf("maximum mark for each subject is 25 only!!!");

    return 0;
}
