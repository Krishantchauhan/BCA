#include<stdio.h>
void main()
{
  int i,a,b,k,pro=1;
  printf("enter a number to find it's power \n");
  scanf("%d",&a);
  printf("enter the power of the numebre\n");
  scanf("%d",&b);
  //k=b;
  for(i=1;i<=b;i++)
  {
    pro=pro*a;

  //  printf("The solution is = %d ",pro);
  }
  printf("The solution is = %d ",pro);
}
