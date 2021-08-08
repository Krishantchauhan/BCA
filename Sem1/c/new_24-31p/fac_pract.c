#include<stdio.h>
int calc(int a);
void main()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
printf("the factorial is =%d",calc(a));
}

int calc(int a)
{
  if(a>=1)
  {
    return (a*calc(a-1));
  }
else  return 1;
}
