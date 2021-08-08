#include<stdio.h>
void main()
{
  int i,l,a[100];
  printf("enter the limit\n");
  scanf("%d",&l);
  for(i=0;i<l;i++)
  {
    printf("Ente the %dth element\n",i+1 );

    scanf("%d",&a[i]);
  }

  int maxx;
  maxx=a[0];

  for ( i = 0; i < l; i++)
   {

    if (maxx<a[i])
    {
      maxx=a[i];
    }

  }
  printf("the greatest element is %d\n",maxx);
}
