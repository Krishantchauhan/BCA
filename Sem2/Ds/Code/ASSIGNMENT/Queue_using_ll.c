//Name:Krishant Chauhan
//course:BCA 2A
//Class Roll no.:-29
//Queue Using Linked List Program
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node;
node *front =0;
	//It(rear) contain address of the "Last Node".
node *rear =0;
void main()
{
	int ch;
	printf("Name:Krishant Chauhan\ncourse:BCA 2A\nClass Roll no.:-29\nDoubly Linked List Program\n");
	do
	{
		printf("\n1.enqueue\n2.display\n3.dequeue\nEnter the choice \n");
		scanf("%d", &ch);
		switch(ch)
		{
			case(1):enqueue();
			break;
			case(2):display();
			break;
			case(3):dequeue();
			break;
		}
	}
	while(1);
}
void enqueue()
{
	int x;
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	newnode->next=NULL;
	printf("Enter the data \n");
	scanf("%d",&x);
	newnode->data=x;
	if(front==0 && rear==0)
	{
		//Storing the address of newnode in rear & front
		front=rear=newnode;
	}
	else
	{
		//LINK B/W Rear to next node from newnode
		rear->next=newnode;
		rear=newnode;
	}
}
void display()
{
	node *temp;
	if (front==0 && rear==0)
	{
		printf("Empty\n");
	} else
	{
		//Giving the address of the first node to temp
		temp=front;
		while (temp!=0)
		{
			printf("The Data is : %d\n", temp->data);
			temp=temp->next;
		}
	}
}

void dequeue()
{
	node *temp;
	//Giving the address of the front to temp
	temp=front;
	if (front==0 && rear==0)
	{
		printf("Empty\n");
	} else
	{
		printf("%d\n",front->data);
		front=front->next;
		free(temp);
	}
}
