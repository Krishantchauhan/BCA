#include<stdio.h>
void main()
{
  int l,a[100];
  printf("enter the limit");
  scanf("%d",&l);
  printf("enter the element");

  for(int i=0;i<l;i++ )
  {
    scanf("%d",&a[i]);
  }
  for(int i=l-1;i>=0;i--)
  {
    printf("%d \n",a[i]);
  }
}
