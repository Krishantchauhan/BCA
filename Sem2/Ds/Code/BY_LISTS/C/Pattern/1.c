#include<stdio.h>
void main()
{
  int i,j,k,n;
  printf("Enter the number of times you want to print \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=n-1;j>=i;j--)
    {
      printf(" ");
    }

    for(k=1;k<=i;k++)
    {
      printf("%d",i);
  }
  printf("\n");
  }
}
