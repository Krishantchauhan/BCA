#include<stdio.h>
void main()
{
  int a,b,c,i;
  printf("enter two number ");
  scanf("%d%d",&a,&b);
  printf("gcd id %d %d",a,b);
  for(i=1 ;i>=a && i>=b ; ++i)
  if(a%i==0 && b%i==0)
  {
    c=i;
  }
    printf("the gc is =%d",c);
}
