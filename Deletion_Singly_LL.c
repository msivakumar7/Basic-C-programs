/******************************************************************************
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int data;
int count;

struct node
{
	int data;
	struct node* next;
}*newnode = NULL,*head = NULL,*tail = NULL,*temp = NULL,*deleteNode = NULL;

int count_Node()
{
	int c = 0;
	temp = head;
	while(temp != NULL)
	{
		temp = temp->next;
		c++;
	}
	return c;
}

void get_linked_list()
{
	int n;
	printf("Enter number of nodes to create:");
	scanf("%d",&n);
	while(n--)
	{
		printf("Enter element to insert:");
		scanf("%d",&data);

		newnode =(struct node*)malloc(sizeof(struct node));
		newnode ->data = data;
		newnode -> next = NULL;

		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
	}
}

void delete_At_Begin()
{
	if(head == NULL)
	{
		printf("List is empty!!!");
		return;
	}

	deleteNode = head;
	head = head->next;
	deleteNode->next = NULL;
	if(deleteNode == tail)
		tail = NULL;
	printf("Deleted node value: %d ",deleteNode->data);
	free(deleteNode);
}

void delete_At_End()
{
	if(tail == NULL)
	{
		printf("List is empty!!!");
		return;
	}
	else if(head == tail)
	{
		printf("Deleted node: %d",head->data);
		free(head);
		head = tail = NULL;
		return;
	}
	else
	{
		temp = head ;
		while(temp->next != tail)
			temp = temp->next;

		deleteNode = temp->next;
		temp->next = NULL;
		tail= temp;

		printf("Deleted Node: %d",deleteNode->data);
		free(deleteNode);
	}
}

void delete_At_middile()
{
	if(head == NULL)
	{
		printf("List is Empty!!!");
		return;
	}

	count = count_Node();
	int mid;
	mid = count/2;

	if(mid < 1)
	{
		printf("There is no middle element!!!");
		return;
	}
	if(mid == 1)
	{
		delete_At_Begin();
		return;
	}
	temp = head;

	for(int i = 1; i < mid; i++)
		temp = temp->next;

	deleteNode = temp->next;
	temp->next = deleteNode->next;
	deleteNode->next = NULL;

	if(deleteNode == tail)
		tail = temp;

	printf("\nDeleted node : %d",deleteNode->data);
	free(deleteNode);
}


void delete_At_position()
{
	int pos;
	printf("Enter position where you want to delete: ");
	scanf("%d",&pos);
	if(pos == 1)
	{
		delete_At_Begin();
		return;
	}
	count = count_Node();
	if(pos <= count)
	{
		temp = head;
		for(int i = 1; i < pos-1; i++)
			temp = temp->next;

		deleteNode = temp->next;
		temp->next = deleteNode->next;
		deleteNode->next = NULL;

		printf("\nDeleted node = %d",deleteNode->data);
	}
	else
	{
		printf("Invalid position!!!");
		return;
	}

	if(deleteNode == tail)
		tail = NULL;
	free(deleteNode);
}

void print_LL()
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

int main()
{
	int n ;
	do {
		printf("1)Get singly linked list\n2)delete_At_Begin\n3)delete_At_End\n4)delete_At_middile\n5)delete_At_position\n6)print_LL\n");;
		int c;
		scanf("%d",&c);
		switch(c)
		{
		case 1:
			get_linked_list();
			break;
		case 2:
			delete_At_Begin();
			break;
		case 3:
			delete_At_End();
			break;
		case 4:
			delete_At_middile();
			break;
		case 5:
			delete_At_position();
			break;
		case 6:
			print_LL();
			break;
		default:
			printf("invalid input!!!");
			break;
		}
		printf("\nDo you want to continue(1): ");
		scanf("%d",&n);
	} while(n == 1);
	return 0;
}