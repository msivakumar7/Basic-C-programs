#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
struct node{
    int data;
    struct node*prev;
    struct node*next;
};

    struct node *hashTable[SIZE];
    
void insert(int value)
{
    
    struct node * newnode = malloc(sizeof(struct node));
    newnode -> data = value;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    
    int index = value%SIZE;
    
    if(hashTable[index] == NULL)
       hashTable[index] = newnode;
    else
    {
      struct node *temp = hashTable[index];
      while(temp -> next != NULL)
          temp = temp -> next;
      
      temp -> next = newnode;
      newnode -> prev = temp;
    }
    
}
void display()
{
    for(int i = 0;i < SIZE;i++)
    {
        struct node*temp = hashTable[i];
        printf("%d -> ",i);
        while(temp != NULL)
        {
            printf("%d -> ",temp -> data);
            temp = temp -> next;
        }
        printf("NULL\n");
    }
}
int main()
{

    int n ;
    scanf("%d",&n);
    int value;

    for(int i = 0;i < n;i++)
    {
        scanf("%d",&value);
        insert(value);
    }
    display();
}