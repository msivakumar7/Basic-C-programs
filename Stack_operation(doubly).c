#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node* prev;
	int data;
	struct node* next;
}*newnode = NULL, *temp = NULL,*bottom = NULL, *top = NULL;

void push(int value)
{
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->prev = NULL;
	newnode->data = value;
	newnode->next = NULL;
	if(bottom == NULL)
	{
		bottom = newnode;
		top = newnode;
	}
	else{
		newnode->prev = top;
		top->next = newnode;
		top = newnode;
	}
}

int Pop()
{
	int data;
	struct node* pop;
	if(top == NULL)
		return -1;

	if(top == bottom)
	{
		pop = top;
		data = pop->data;
		top = bottom = NULL;
		free(pop);
		return data;
	}
	pop = top;
	data = pop->data;
	top->prev->next = NULL;
	top = pop->prev;
	pop->prev = NULL;
	free(pop);
	return data;
}

int top_value()
{
	if(top == NULL)
		return -1;

	return top->data;
}

int total_count()
{
	int count = 0;
	if(top == NULL)
		return -1;
	temp = top;
	while(temp != NULL)
	{
		count++;
		temp = temp->prev;
	}
	return count;
}

void print_stack()
{
	if(top == NULL)
	{
		printf("Stack is Empty!!!\n");
		return;
	}
	temp = top;
	printf("print the stack from top!!!\n");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");

}

int main()
{
	int value,c,del,Top,total;
	do {
		printf("1)PUSH\n");
		printf("2)POP\n");
		printf("3)Print top value\n");
		printf("4)Total count\n");
		printf("5)Print Stack\n");
		printf("6)Exit\n");

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
			del = Pop();
			if(del == -1)
				printf("Stack is empty\n");
			else
				printf("Pop out element: %d\n",del);
			break;
		case 3:
			Top = top_value();
			if(Top == -1)
				printf("Stack is empty!!!\n");
			else
				printf("Top of the element: %d\n",Top);
			break;
		case 4:
			total = total_count();
			if(total == -1)
				printf("Stact is empty!!!\n");
			else
				printf("Total count = %d\n",total);
			break;
		case 5:
			print_stack();
			break;
		case 6:
			printf("End of the program!!!!");
			return 0;
		default :
			printf("INVALID CHOICE!!!");
			break;
		}
	} while(1);

}