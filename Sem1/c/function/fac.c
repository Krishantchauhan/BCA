#include<stdio.h>
void main()
{
  int a,b,i;
  printf("etner the number to find the factorial");
  scanf("%d",&a);
  b=1;
  for(i=1;i<=a;i++)
  {
    b=b*i;
  }
  printf("the factorial is =%d" , b);
}
