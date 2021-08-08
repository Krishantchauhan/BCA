#include<stdio.h>
void main()
{
  int a[10],i,*p,j;
  printf("enter the array of element");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
p=a;
*a=*p;

for(j=1;j<5;j++)
{
  if(*(a+j)< *p)
  {
    *p=*(a+j);
  }
}
  printf("the smallest element is %d",*p);
}
