#include<stdio.h>
void main()
{
  int i,a[10],*p;
  printf("entert the element ");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  p=a;
  *p=*a;

  for(i=1;i<5;i++)
  {
    if(*(a+i)< *p)
    {
      *p=*(a+i);
    }
  }
  printf("the smallest is %d",*p);
}
