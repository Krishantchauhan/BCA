#include<stdio.h>
#include <stdlib.h>
int main()
{
  int x1,x2,y1,y2,d,steps,xinc,yinc;
  printf("Enter the Coordinated\n");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  int dx=x2-x1;
  int dy=y2-y1;
  // printf("%d %d \n",x1,y1);
  int x,y;
  x=x1;
  y=y1;
  int m=dy/dx;
  d=(2*dy-dx);

  if(m<1)
  {
    while (x!=x2)
    {
      x=x+1;
      if (d>=0)
      {
        d=d+(2*dy-2*dx);
        y=y+1;
      }
      else
        d=d+2*dy;
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
        d=d+(2*dx-2*dy);
        x=x+1;
      }
      else
        d=d+2*dx;
      printf("%d %d \n",x,y);
    }
  }
  return 0;
}
