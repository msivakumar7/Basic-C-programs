// #include <stdio.h>

// void print(int n)
// {
//     printf("SIVAKUMAR\n");
//     n--;
//     if(n > 0)
//     print(n);
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     print(n);
// }
#include <stdio.h>

void print()
{
     static int n ;
    
    if(n == 0)
    scanf("%d",&n);
    
    
    if(n > 0)
    {
    printf("SIVAKUMAR\n");
    n--;
    print();
    }
}

int main()
{
  
    print();
}
