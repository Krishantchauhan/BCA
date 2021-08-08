#include<stdio.h>
int calc(int a);
void main()
{
  int a=9,b=0,c;
  for(c=0;c<=a;c++){
    printf("%d \t",calc(b));
    b++;
  }
  //printf("a=%d\n",a );
}

int calc(int a)
{
  if(a==1)
  return 1;
  else if(a==0)
  return 0;

  else return calc(a-2)+calc(a-1);

}
