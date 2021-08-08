#include<stdio.h>
void main()
{
  int a;
  printf("etner the number to find the factorial \n");
  scanf("%d",&a);
  calc(a);
}

int calc(int a)
{
  int b,i;
  b=1;
  for(i=1;i<=a;i++)
  {
    b=b*i;
  }
  printf("the factorial is = %d \n",b);
  return 0;
}
