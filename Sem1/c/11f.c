#include<stdio.h>
int pro(int b[10],int max);
int main()
{
  int a[10],i,l,max;
  printf("enter the array \n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  pro(a,max);
  printf("%d",max);
  return 0;
}

int pro(int b[10],int max)
{
  int j;
  max =b[0];
  for(j=0;j<5;j++)
  {
    if(b[j]>max)
    {
      max=b[j];
    }
    }
  return max;
}
