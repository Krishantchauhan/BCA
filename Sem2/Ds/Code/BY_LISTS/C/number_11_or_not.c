#include<stdio.h>
void main()
{
  int n ,even,odd,a1,a,b,sum;
  printf("Enter a number to check the number is divisible by 11 or not \n");
  scanf("%d",&n);
  even=0;
  odd=0;
  while(n!=0)
  {
    a=n%10;
    even=even+a;
    n=n/10;
    a1=n%10;
    odd=odd+a1;
    n=n/10;
  }
  sum=0;
  if(even<odd)
  {
    sum=odd-even;
  }
  else
  sum=even-odd;

  if(sum==0)
  printf("The number is divisible by 11 \n");
  else
  printf("The number is not divisible by 11\n");
}
