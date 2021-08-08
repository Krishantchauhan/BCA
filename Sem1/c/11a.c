#include<stdio.h>
void main()
{
  int a[10],i,max;
  printf("enter the array");

  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }

max=a[0];

for(i=0;i<5;i++)
{
  if(a[i]>max)
  {
    max=a[i];
  }
}
printf("%d",max);

}
