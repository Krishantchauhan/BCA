#include<stdio.h>
void main()
{
  int a[10],i,l;
  printf("enter the size of an array \n");
  scanf("%d",&l);
  printf("enter %d elements \n",l);
  for(i=0;i<l;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=l-1;i>=0;i--)
  {
    printf("%d \n",a[i]);
  }
}
