#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
}*newnode = NULL,*head = NULL, *tail = NULL, *temp = NULL;

int data;
int count = 0;
int totalNode(struct node*head)
{
	temp = head;
	int c = 0;
	while(temp != NULL)
	{
		c++;
		temp= temp->next;
	}
	return c;
}

void insertAtBegin()
{
	printf("Enter the data you want to insert: ");
	scanf("%d",&data);

	newnode =(struct node*) malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}

void insertAtEnd()
{
	printf("Enter the data you want to insert: ");
	scanf("%d",&data);
	newnode  = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;

	if(tail == NULL)
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
void insertAtMiddle()
{
	int data;
	printf("Enter the data you want to insert: ");
	scanf("%d",&data);

	newnode = malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	if(head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else
	{
		count = totalNode(head);
		int mid = count/2;
		temp = head;
		for(int i = 1; i < mid; i++)
			temp = temp->next;
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void insertAtPosition()
{
	printf("Enter element which want you to insert: ");
	scanf("%d",&data);
                          
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;

	int pos;

	printf("Enter position where you want to insert: ");
	scanf("%d",&pos);
	if(pos <= 0)
	{
		printf("Invalid position!!!");
		return;
	}
	else if(head == NULL)
	{
		head = newnode;
		tail = newnode;
	}
	else if(pos == 1)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		count = totalNode(head);
		if(pos <= count+1 )
		{
			temp = head;
			for(int i = 1; i < pos-1; i++)
				temp = temp->next;

			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
		{
			printf("Enter valid position to insert!!!");
			return;
		}

	}
}
void reverse_LL()
{
    struct node*pre = NULL;
    struct node*curr = head;
    struct node*nex = NULL;
    while(curr != NULL)
    {
        nex = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    head = pre;
    
}
void print_Singly_LL(struct node* head)
{
	temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main()
{

	int n,c;
	do
	{
		printf("1)Insert At begin\n2)Insert At end\n3)insert At Middle\n4)Insert At Position\n5)Reverse the linked list\n6)print linked list\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
		case 1:
			insertAtBegin();
			break;
		case 2:
			insertAtEnd();
			break;
		case 3:
			insertAtMiddle();
			break;
		case 4:
			insertAtPosition();
			break;
		case 5:
		    reverse_LL();
		    break;
		case 6:
			print_Singly_LL(head);
			break;
		default:
			printf("Invalid choice");
			break;
		}
		printf("\nDo you want to continue(enter 1 to continue):");
		scanf("%d",&n);
	} while(n == 1);
	return 0;
}