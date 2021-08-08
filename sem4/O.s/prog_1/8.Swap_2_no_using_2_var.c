#include<stdio.h>
void main()
{
  int a,b;
  printf("enter the first numbers ");
  scanf("%d",&a);

  printf("enter the second numbers \n");
  scanf("%d",&b);

  swap(a,b);

}

int swap(int a,int b)
{
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swap is: \n");
  printf("the first numbers %d\n",a);
  printf("the second numbers %d\n",b);

}
