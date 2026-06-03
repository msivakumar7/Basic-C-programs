/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/
#include <stdio.h>

void main()
{
    int a, b ,c;
    // float c, d;
    // char e = 'e';
    // long g;
//     a =4294967297;
//     printf("%d",a);
//     printf("\n%d",a);
    scanf("%d %d %d",&a,&b,&c);
    printf("Highest value : %d",(a>b) && (a>c)?a:(b>c) ? b : c);
//     printf("\ninteger = %d",sizeof(a));
//      printf("\nfloat = %d",sizeof(c));
//       printf("\nchar = %d",sizeof(e));
//      printf("\nlong = %d",sizeof(g));
// 
}
