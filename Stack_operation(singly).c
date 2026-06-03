/******************************************************************
*******************************************************************/
#include <stdio.h>
#include <stdlib.h>
int data;
struct node{
    int data;
    struct node*next;
}*newnode = NULL,*top = NULL,*temp = NULL,*POP = NULL;

void push(int value)
{
    newnode=malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Stack is overflow,Memory allocation failed!!!");
        return;
    }
    newnode->data = value;
    newnode->next = NULL;
                                            // THERE IS NO NEEDED TO CHECK TOP == NULL
            newnode->next = top;            // because defaulty top = NULL;
            top = newnode;
}

int pop()
{
    if(top == NULL)
    {
        printf("Stack is empty!!!");
        return -1;
    }
    
    POP = top;
    data = top->data;
    top = top->next;
    
    free(POP);
    return data;
    
}
int peek()
{
    if(top == NULL)
    {
        printf("Stack is empty!!!");
        return -1;
    }
    return top->data;
}
void print_stack()
{
    
    if(top == NULL)
    {
        printf("Stack is empty!!!");
        return;
    }
    temp = top;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    	int value,c,del,Top,total;
while(1)
{
		printf("1)PUSH\n");
		printf("2)POP\n");
		printf("3)Print top value\n");
		printf("4)Print Stack\n");
		printf("5)Exit\n");

		printf("Enter your choice: ");
		scanf("%d",&c);

		switch(c)
		{
		case 1:
			printf("Enter a value: ");
			scanf("%d",&value);
			push(value);
			break;
		case 2:
			del = pop();
			if(del == -1)
				printf("Stack is empty\n");
			else
				printf("Pop out element: %d\n",del);
			break;
		case 3:
			Top = peek();
			if(Top == -1)
				printf("Stack is empty!!!\n");
			else
				printf("Top of the element: %d\n",Top);
			break;
		case 4:
			print_stack();
			break;
		case 5:
			printf("End of the program!!!!");
			return 0;
		default :
			printf("INVALID CHOICE!!!");
			break;
		}
	} 
}
