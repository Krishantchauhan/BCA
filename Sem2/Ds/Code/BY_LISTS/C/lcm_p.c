#include<stdio.h>
void main()
{
  int a,b,lcm;
  printf("Enter Two Numbers \n");
  scanf("%d %d",&a,&b);
  lcm=(a>b)?a:b;
  while(1)
  {
  if(lcm%a==0 && lcm%b==0)
  {
    printf("The Lcm is %d",lcm);
    break;
  }
  else
  lcm++;
}
}
