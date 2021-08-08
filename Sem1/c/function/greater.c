#include<stdio.h>

int  main()
{
  int a,b,c;
  printf("enter 3 number ");
  scanf("%d %d %d",&a,&b,&c);
  calc(a,b,c);
  return 0;
}


int calc(int a, int b , int c)
{
  if (a>b && a>c)
   {
  printf("first number is greater");
}
else if (b>a && b>c)
 {
  printf("second number is greater ");
  }
 else
  printf("third number is greater");
return 0;
//return calc(a,b,c);
}
