
#include <stdio.h>

int main()
{  
    int pc[3] ={626140,626141,626142};
    int age[3] = {19,19,20};
    int RollNo[3] = {101,102,103};
    int* EEE[3] ={pc,age,RollNo};
   
     for(int i = 0;i < 3;i++)
    {
        printf("%d\n",i+1);
        for(int j = 0;j < 3;j++)
        printf("%d ",(EEE[j] + i));
        
        printf("\n");
    } 
    
    printf("\nStudent Details:\n");
    for(int i = 0;i < 3;i++)
    {
         printf("%d\n",i+1);
        for(int j = 0;j < 3;j++)
        printf("%d ",*(EEE[j] + i));
        
        printf("\n");
    }
    return 0;
}
