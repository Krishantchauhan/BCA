#include<stdio.h>
void main()
{
  int i,l,a[100];
  printf("enter the limit");
  scanf("%d",&l);
  for(i=0;i<l;i++)
  {
    scanf("%d",&a[i]);
  }

  int min;
  min=a[0];

  for ( i = 0; i < l; i++)
   {
    /* code */
    if (min>a[i])
    {
      min=a[i];
    }

  }
  printf("the least element is %d",min);
}
