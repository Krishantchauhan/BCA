
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
		int data;
		struct node* prev;
		struct node* next;
}node;
node *head,*tail;
void input(int x);
void display();

void main()
{
	int ch,x;
	while(1)
	{
		printf("\n1.enqueue\n2.display \n");
		scanf("%d",&ch);
		switch(ch)
			{
	 		case 1:printf("Enter the data to recive\n");
	 		scanf("%d",&x);
	 		input(x);
	 		break;
	 		case 2:printf("Data in List :\n");
	 		display();
	 		break;
		}
	}
}

void input(int x)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=x;
	newnode->prev=0;
	newnode->next=0;
	if (head==0)
	{
		newnode->next=0;
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}
}



void  display()
{
	node *temp;
	temp=head;
	if (temp==0)
	{
		printf("Empty\n");
	}
	else
	{
		while (temp!=0)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
  	}
	}
}
