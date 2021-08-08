//Name:Krishant Chauhan
//course:BCA 2A
//Class Roll no.:-29
//Doubly Single Linked List Program

#include<stdio.h>
#include<stdlib.h>
void append();
void display();
int reverse();
typedef struct node
{
		int data;
		struct node* next;
}node;
node* head;
void main ()
{
	int ch;
	printf("Name:Krishant Chauhan\ncourse:BCA 2A\nClass Roll no.:-29\n\n\t\tReverse Of Linked List Using Recursion Program\n\n");
	while (1)
	{
		printf("1.Append\n2.Display\n3.Reverse\n4.Exit\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:append();
			break;
			case 2:display();
			break;
			case 3:reverse(head);
			break;
			case 4:exit(1);
		}
	}
}

void append()
{
	node * newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("Enter the data of node :\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
 if (head==0)
	{
		head=newnode;
	} else
	{
		node *temp;
		temp=head;

		while (temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}

void display()
{
	node * temp;
	temp=head;
	if (temp==0)
	{
		printf("List is Empty\n");
	} else
	{
		while (temp!=0)
		{
			printf("Data is: %d\n",temp->data );
			temp=temp->next;
		}
	}
}

int reverse(node *temp)
{
	if(temp==0)
	{
		return;
	}
	reverse(temp->next);
	printf("Data is: %d\n",temp->data);
}
