#include <stdio.h>

int main()
{
    struct student
    {
        char name[100];
        int roll;
        int age;
        int pin;
    };
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);

        struct student s[n];
    
    for(int i = 0;i < n;i++)
    {
    printf("Enter Student %d name: ",i+1);
    scanf("%s",s[i].name);
    printf("Enter Student %d roll number: ",i+1);
    scanf("%d",&s[i].roll);
      printf("Enter Student %d age: ",i+1);
    scanf("%d",&s[i].age);
      printf("Enter Student %d pincode: ",i+1);
    scanf("%d",&s[i].pin);
    }
    for(int i = 0;i < n;i++)
    {
        printf("Student %d details...\n",i+1);
      printf("Name: %s\n",s[i].name);
      printf("Roll No: %d\n",s[i].roll);
      printf("Age: %d\n",s[i].age);
      printf("Pincode: %d",s[i].pin);
      printf("\n");
    }
    return 0;
}
