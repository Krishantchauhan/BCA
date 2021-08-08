#include <stdio.h>
#define N 5
int top=-1;
int stack[N];
void main()
{
  int ch;
  do
  {
    printf("\n1.push\n2.pop\n3.peek\n4.disp\nEnter the choice \n");
    scanf("%d", &ch);
    switch(ch)
    {
      case(1):Push();
      break;
      case(2):POP();
      break;
      case(3):peek();
      break;
      case(4):display();
      break;
    }
   }
   while(ch<5);
}


void Push()
{
  int x;
  printf("\nEnter a  data");
  scanf("%d",&x);
  if(top==N-1)
  printf("Overflow\n");
  else
  {
    top++;
  stack[top]=x;;
  }
}


void POP()
{
  int item;
  if (top==-1)
  {
    printf("Underflow\n");
  }
  else
  {
    item=stack[top];
    top--;
    printf("\n%d",item);
  }
}
void peek()
{
  if(top==-1)
  printf("stack is empty \n");
  else
  printf("%d\n",top+1);
}
void display()
{
  int i;
  for(i=top;i>=0;i--)
  printf("%d\n",stack[i]);
}
