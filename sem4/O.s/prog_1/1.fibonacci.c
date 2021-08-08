#include<stdio.h>
int calc(int i);
void main()
{
  int a=8,i=0,c;
  for(c=0;c<=a;c++)
  {
    printf("%d \t",calc(i));
    i++;
  }
}

int calc(int i)
{
  if(i==0)
  return 0;
  else if (i==1)
  return 1;
  else return calc(i-1)+ calc(i-2);
}
