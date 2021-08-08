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

  int maxx;
  maxx=a[0];

  for ( i = 0; i < l; i++)
   {
    /* code */
    if (maxx<a[i])
    {
      maxx=a[i];
    }

  }
  printf("the greatest element is %d",maxx);
}
