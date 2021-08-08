#include<stdio.h>
int calc(int a);
void main()
{
  int a=9,b=0,c;
  for(c=0;c<=a;c++)
  {
    printf("%d \t",calc(b));
      b++;
  }
}

int calc(int b)
{
  if(b==0)
  return 0;
  else if(b==1)
  return 1;
  else return calc(b-2)+calc(b-1);
}
