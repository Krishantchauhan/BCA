#include<stdio.h>
int calc(int a);
void main()
{
  int a,i,j;
  a=0;
  for(j=0;j<=8;j++)
  {
    printf("%d\n",calc(a));
    a++;
  }

}
int calc(int a)
{
  if(a==0)
   return 0;
   else if(a==1)
   return 1;
   else return calc(a-1)+ calc(a-2);

}
