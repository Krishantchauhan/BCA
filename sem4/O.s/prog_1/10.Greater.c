#include<stdio.h>

void  main()
{
  int a,b,c;
  printf("enter 3 number \n");
  scanf("%d %d %d",&a,&b,&c);
  calc(a,b,c);

}


int calc(int a, int b , int c)
{
  if (a>b && a>c)
   {
  printf("first number is greater \n");
}
else if (b>a && b>c)
 {
  printf("second number is greater \n");
  }
 else
  printf("third number is greater\n");
return 0;

}
