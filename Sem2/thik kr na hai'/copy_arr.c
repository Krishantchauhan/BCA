#include<stdio.h>
void main()
{
  int i,n,s,a[100],b[100];
  printf("Enter the size of an array \n");
  scanf("%d",&s);

  printf("Enter the %d Element\n",s);
  for(i=0;i<s;i++)
  scanf("%d",&a[i]);

  for(i=0;i<s;i++)
  {
    b[i]=a[i];
  }

  for(i=0;i<s;i++)
  printf("%d\n",b[i]);
}
