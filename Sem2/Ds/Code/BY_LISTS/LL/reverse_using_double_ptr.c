#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
          current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void display(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct Node* head = NULL;
		int ch,da;
    printf("Name:Krishant Chauhan\ncourse:BCA 2A\nClass Roll no.:-29\n\n\t\tReverse Of Linked List Using Recursion Program\n\n");
		while (1)
		{
			printf("1.Append\n2.Display\n3.Reverse\n");
			scanf("%d",&ch);
			switch (ch)
			{
				case 1:
				printf("Enter the data of node :\n");
				scanf("%d",&da);
				push(&head,da);
				break;
				case 2:display(head);
				break;
				case 3:reverse(&head);
				break;
				case 4:exit(1);
			}
		}
}
