#include<stdio.h>
int pro(int b[10][10],int sum);
void main()
{
  int a[10][10],i,j,sum;
  printf("enter the array");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);
  }
}
pro(a[10][10],sum);
printf("%d",sum);
}

int pro(int b[10][10],int sum)
{
  int k,l;
  for(k=0;k<3;k++)
  {
    for(l=0;l<3;l++)
    {
      if(k==l)
      {
      sum=sum+b[k][l];
      }
    }
  }
  printf("%d",sum);
  return sum;
}
