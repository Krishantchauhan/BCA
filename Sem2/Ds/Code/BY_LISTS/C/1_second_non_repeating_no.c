#include<stdio.h>
void main ()
{
int n,i,j,c=0,m=0;
printf("enter the size of array ");
scanf("%d",&n);
int a[n],b[m];
printf("enter the elements ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
  c=0;
  for(j=0;j<n;j++)
  {
    if(a[i]==a[j])
    {
      c++;
    }
  }
  if(c==1)
  {
    b[m]=a[i];
    m++;
  }
}
  printf("second element is %d",b[1]);
}
