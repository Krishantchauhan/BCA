#include<stdio.h>
int calc(int b);
void main()
{
  int a,i;
  printf("enter the value");
  scanf("%d",&a);
  printf("the value is %d",calc(a));
}
int calc(int b)
{
if(b!=0)
{
  return (b*calc(b-1));
}
else
return 1;
}
