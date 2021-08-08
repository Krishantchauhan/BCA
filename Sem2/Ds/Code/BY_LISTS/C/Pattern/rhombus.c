#include<stdio.h>
void main()
{
  int i,j,k,l,a=3,b=1;
  for(i=1;i<=4;i++)
  {
    for(j=i;j<=a;j++)
    printf(" ");
    for(k=1;k<=i;k++)
    printf("%d",k);
    for(k=i-1;k>=1;k--)
    printf("%d",k);
    printf("\n");
  }
  for(i=3;i>=1;i--)
  {
    for(j=i;j<=3;j++)
    printf(" ");
    for(k=1;k<=i;k++)
    printf("%d",k);
    for(k=i-1;k>=1;k--)
    printf("%d",k);
    printf("\n");
  }
}
