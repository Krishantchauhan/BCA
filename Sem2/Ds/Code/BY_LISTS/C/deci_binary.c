#include<stdio.h>
void main()
{
  int m,n,sum,base,r;
  printf("enter the decimal number");
  scanf("%d",&n);
  base=1;
  sum=0;
  while(n>0)
  {
    r=n%10;
    printf("r %d \n",r);
    m=base*r;
    printf("m %d \n",m);
    sum=sum+m;
    printf("s %d \n",sum);
    base=base*2;
    printf("base %d \n",base);
    n=n/10;
    printf("n %d \n",n);
  }
    printf("sum = %d \n",sum);
}
