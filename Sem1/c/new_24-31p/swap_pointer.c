#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the 2 numbers ");
  scanf("%d %d",&a ,&b);

  swap(&a , &b);
  printf("after swap is %d \t %d", a, b);
}

int swap(int *a,int *b)
{
  *a=*a+*b;
  *b=*a-*b;
  *a=*a-*b;
  return 0;
}
