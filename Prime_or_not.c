#include <stdio.h>

int main()
 {
//     int n;
//     scanf("%d",&n);
    
//     int isprime = 1;
//     for(int i = 2;i <= n/2; i++)
//     {
//         if(n%i == 0)
//         {
//           isprime = 0;
//             break;
//         }
//     }
//     if(isprime)
//     printf("%d is a prime number!!!",n);
//     else
//     printf("%d is not a prime number!!!",n);
int n;
   scanf("%d",&n);
       int isprime = 1; 
      for (int  i = 2;i*i <= n;i++) 
        if(n%i == 0)      //----->1 1+2 for-loop takes it as a single line, 
            isprime = 0;  //----->2
      if(isprime)
      printf("%d is a prime number!!!",n);
      else
      printf("%d is not a prime number!!!",n);
        
      
}
