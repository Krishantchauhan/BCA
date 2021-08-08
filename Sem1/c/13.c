#include<stdio.h>
void main()
{
  int a[10],i,b[10];
  printf("enter the array");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=4;i>=0;i--)
  {
    printf("%d \n",a[i]);
  }
}
