#include<stdio.h>
void main()
{
  int a;
  printf("enter the number ");
  scanf("%d",&a);
  calc(a);
}

int calc(int a)
{
  int sum,b;
   sum=0;
   while(a>0)
   {
     b=a%10;
     sum=sum+b;
     a=a/10;
   }
   printf("the sum is =%d\n",sum);
   return 0;
}
