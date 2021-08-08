#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node
{
	int info;
	struct node *prev;
	struct node *nxt;
}nodetype;

nodetype *insertbeg(nodetype *start);
nodetype *insertmid(nodetype *start);
nodetype *insertend(nodetype *start);
nodetype *delbeg(nodetype *start);
nodetype *delmid(nodetype *start);
nodetype *delend(nodetype *start);
void count(nodetype *start);
void search(nodetype *start);
void display(nodetype *start);

int main()
{
    int ch,r=1;
    nodetype *start=NULL;
	while(r==1)
	{
	    printf("\t-------------------------------------------------");
		printf("\n\t|\tImplementation of linked list\t\t|\n");
		printf("\t-------------------------------------------------\n");
		printf("\t|\t1.Insert at begining\t\t\t|\n");
		printf("\t|\t2.Insert at middle  \t\t\t|\n");
		printf("\t|\t3.Insert at end     \t\t\t|\n");
		printf("\t|\t4.Delete from begining\t\t\t|\n");
		printf("\t|\t5.Delete from middle \t\t\t|\n");
		printf("\t|\t6.Delete from end   \t\t\t|\n");
		printf("\t|\t7.Count number of nodes\t\t\t|\n");
		printf("\t|\t8.Search a given value \t\t\t|\n");
		printf("\t|\t9.Display            \t\t\t|\n");
		printf("\t|\tEnter 0 to exit...     \t\t\t|\n");
		printf("\t|");
		printf("-----------------------------------------------");
		printf("|\n");
		printf("\t|\tEnter your choice:  \t\t\t|");
		scanf("%d",&ch);
		printf("\t|-----------------------------------------------|\n\n");

		switch(ch)
		{
			case 1:start=insertbeg(start);
			break;
			case 2:start=insertmid(start);
			break;
			case 3:start=insertend(start);
			break;
			case 4:start=delbeg(start);
			break;
			case 5:start=delmid(start);
			break;
			case 6:start=delend(start);
			break;
		    case 7:count(start);
			break;
			case 8:search(start);
			break;
			case 9:display(start);
			break;
			case 0:exit(0);
			default:printf("Enter a valid choice\n");
			break;
		}
		printf("\ndo you want to continue??\t");
		scanf("%d",&r);
		if (r!=1)
        {
            break;
        }
	}
	getch();
	return 0;
}

nodetype *insertbeg(nodetype *start)
{
	nodetype *temp;
	int ele;
	printf("Enter The element you want to insert:");
	scanf("%d",&ele);//temp->info
	temp=(nodetype *)malloc(sizeof(nodetype));
	temp->info=ele;
	temp->nxt=NULL;
	temp->prev=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->nxt=start;
		start->prev=temp;
		start=temp;
	}
	return start;
}

nodetype *insertmid(nodetype *start)
{
	nodetype *ptr,*temp;
    int i,pos,ins;
    temp=(nodetype *)malloc(sizeof(nodetype));
    printf("\nEnter the position for the new node to be inserted:\t");
    scanf("%d",&pos);
    printf("\nEnter the data value of the node:\t");
    scanf("%d",&ins );
    temp->info=ins;
    temp->nxt =NULL;
    temp->prev = NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        ptr=start;
        for(i=0;i<pos;i++)
        {
            ptr=ptr->nxt;
            if(ptr==NULL)
            {
                printf("\nPosition not found!!!\n");

            }
        }
        temp->nxt =ptr->nxt;
        //ptr->nxt = temp->prev;
        ptr->nxt->prev=temp;
        temp->prev=ptr;
        ptr->nxt=temp;
    }
    return start;
}

nodetype *insertend(nodetype *start)
{
    nodetype *temp;
    nodetype *q;
    q=start;
    int ele;
	printf("Enter the data:");
	scanf("%d",&ele);//temp->info;
	temp=(nodetype *)malloc(sizeof(nodetype));
	temp->info=ele;
	temp->nxt=NULL;
	if(start==NULL)
    {
        start = temp;
    }
    else
    {
        while(q->nxt!=NULL)
        {
            q=q->nxt;
        }
    }
    q->nxt=temp;
    temp->prev=q;
    return start;

}


nodetype *delbeg(nodetype *start)
{
	nodetype *ptr;
	if(start==NULL)
	{
		printf("List is empty\n");
	}
	else
    {
        ptr=start;
        start=ptr->nxt;
        free (ptr);
        printf("element deleted!!!");
        return start;
    }
}

nodetype *delmid(nodetype *start)
{
    int i,pos;
    nodetype *temp,*ptr;
    if(start==NULL)
    {
        printf("\nThe List is Empty\n");
        exit(0);
    }
    else
    {
        ptr=start;
        printf("\nEnter the position of the node to be deleted:\t");
        scanf("%d",&pos);
        for(i=0;i<pos;i++)
        {
            if(ptr==NULL)
            {
                printf("\nPosition not Found:\n");
            }
            temp=ptr;
            ptr=ptr->nxt ;
        }
        temp->nxt =ptr->nxt;
        printf("\nThe deleted element is:%d\t",ptr->info );
        free(ptr);
    }
    return start;
}

nodetype *delend(nodetype *start)
{
	nodetype * temp,*ptr;
    if(start==NULL)
    {
        printf("\nList is Empty:");
    }
    else
    {
        ptr=start;
        while(ptr->nxt!=NULL)
        {
            temp=ptr;
            ptr=ptr->nxt;
        }
        temp->nxt=NULL;
        printf("\nThe deleted element is:%d\t",ptr->info);
        free(ptr);
    }
    return start;
}


void count(nodetype *start)
{
	nodetype *ptr;
	int count=0;
	ptr=start;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->nxt;
	}
	printf("Number of Nodes :%d",count);
}

void search(nodetype *start)
{
    nodetype *ptr;
    int x,pos;
    if(start==NULL)
    {
        printf("empty list");
    }
    else
    {
        ptr=start;
        printf("Enter the data want to search");
        scanf("%d",&x);
        pos=1;

        while(ptr!=NULL)
        {
            pos++;
            if(ptr->info==x)
            {
                printf("Data %d found in pos %d",x,pos);
                return;
            }
            else if(ptr->nxt != NULL)
            {
                ptr=ptr->nxt;
            }
            else
            {
                printf("data not found");
                break;
            }
        }
    }
}

void display(nodetype *start)
{
	nodetype *ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("No element\n");
	}
	else
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->info);
		ptr=ptr->nxt;
	}
}
