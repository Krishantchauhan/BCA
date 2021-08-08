#include<stdio.h>
void main()
{
  int a;
  printf("enter the number to reverse\n");
  scanf("%d",&a);
  calc(a);
}
int calc(int a)
{
  int b,sum=0;
  while(a!=0)
  {
    b=a%10;
      sum=sum*10+b;
      a=a/10;
  }
  printf("the reverse is = %d\n",sum);

}
