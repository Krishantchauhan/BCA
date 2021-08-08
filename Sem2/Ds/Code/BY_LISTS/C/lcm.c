#include<stdio.h>
void main()
{
  int a,b,i,max,n,m ;
  printf("ente two numberes \n");
  scanf("%d  %d",&a,&b);
  if(a<b)
  max=b;
  else
  max=a;
  n=a;
  m=b
  int lcm,j;
  lcm=1;
  for(i=2;i<max;i++)
  {
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
        break;
      }
    }
    if(j==i)
    {
      while(n%i==0 && m%i==0)
      {
        lcm=lcm*i;
        n=n/i;
        m=m/i;
      }
      while(n%i==0)
      {
        lcm=lcm*i;
        n=n/i;
      }
      while(m%i==0)
      {
        lcm=lcm*i;
        m=m/i;
      }
    }
    if(n==1 && m==1)
    break ;
  }
  printf("lcm is = %d",lcm);
}
