/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int isprime;
  
//   for(int i = 2;i <= n;i++)
    // { 
        isprime = 1;
        for(int j = 2;j <= n/2;j++)
        {
            if(n%j == 0 && n != 2)
            isprime = 0;
        }
        if(isprime)
            printf("%d ",n);
    // }
    return 0;
}
