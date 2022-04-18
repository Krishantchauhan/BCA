#include<stdio.h>
void main()
{
  double x1,x2,y1,y2,m,d;
  printf("Enter the Coordinated\n");
  scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
  m=(y2-y1)/(x2-x1);

  int x,y;
  x=x1;
  y=y1;
  printf("%d %d \n",x,y);

  d=(2*(y2-y1)-(x2-x1));

  if(m<1)
  {
    while (x!=x2)
    {
      x=x+1;
      if (d>=0)
      {
        d=d+(2*(y2-y1)-2*(x2-x1));
        y=y+1;
      }
      else
        d=d+2*(y2-y1);
      printf("%d %d \n",x,y);
    }
  }

  if(m>=1)
  {
    while (y!=y2)
    {
      y=y+1;
      if(d>=0)
      {
        d=d+(2*(x2-x1)-2*(y2-y1));
        x=x+1;
      }
      else
        d=d+2*(x2-x1);
      printf("%d %d \n",x,y);
    }
  }
}
