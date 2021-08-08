#include<stdio.h>
void main()
{
  int a,b,i,max,min ;
  printf("ente two numberes \n");
  scanf("%d  %d",&a,&b);
  if(a>b)
  {
  min=b;
  max=a;
  }
  else
  {
  min=a;
  max=b;
  }
  int hcf,j;
  for (i=1;i<=min;i++)
  {
    if(min%i==0)
    {
      if(max%i==0)
      {
        hcf=i;
      }
    }
  }
  printf("hcf is = %d",hcf);
}
