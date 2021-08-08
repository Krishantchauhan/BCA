#include<stdio.h>
void main()
{
  int a;
  printf("enter the number to reverse");
  scanf("%d",&a);
  calc(a);
}
int calc(int a)
{
  int b,sum=0;
  while(a!=0)
  {
    b=a%10;
    printf("the reverse is b= %d\n",b);
    sum=sum*10+b;
    printf("the reverse is s= %d\n",sum);
    a=a/10;
    printf("the reverse is a= %d\n",a);

  }
  printf("the reverse is = %d",sum);
  return 0;
}
