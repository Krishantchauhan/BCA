#include<stdio.h>
void main()
{
  int a[10],i,l,max;
  printf("enter the limit");
  scanf("%d",&l);
  printf("enter the first string");
  for (i=0;i<l;i++)
  {
    scanf("%d",&a[i]);
  }

max=a[0];

for(i=0;i<l;i++)
{
  if(max>a[i])
  {
    max=a[i];
  }
}
printf("%d",max);

}
