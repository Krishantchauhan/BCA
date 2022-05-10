#include <stdio.h>

int round(double a)
{
  return a>0?a+0.5:a-0.5;
}

 void main()
 {
  double x1,x2,y1,y2,slope,x,y,dx,dy ;
  int x_a[100],y_b[100],n;

  printf("Enter a x1 \n ");
  scanf("%lf",&x1);

  printf("Enter a y1 \n ");
  scanf("%lf",&y1);

  printf("Enter a x2 \n ");
  scanf("%lf",&x2);

  printf("Enter a y2 \n ");
  scanf("%lf",&y2);

  dx=x2-x1;
  dy=y2-y1;

  slope=dy/dx;
  x=x1;
  y=y1;

  if (slope>=1)
  {
    while(y!=y2)
    {
      x=x+(1/slope);
      y=y+1;
      x_a[n]=round(x);
      y_b[n]=y;
      n++;
    }
  }else
  {
    while (x!=x2)
    {
      x=x+1;
      y=y+slope;
      x_a[n]=y;
      y_b[n]=round(y);
      n++;
    }
  }

  for(int i=0;i<n;i++)
    printf("%d %d \n",x_a[i],y_b[i]);
}
