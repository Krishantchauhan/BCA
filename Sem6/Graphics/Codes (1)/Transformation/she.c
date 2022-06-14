#include<stdio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm;

  int sx,sy;
  int x,y;
  x=200;
  y=300;
  printf("Enter the tx corrdiantes ");
  scanf("%d",&sx);

  printf("Enter the ty corrdiantes ");
  scanf("%d",&sy);

  initgraph(&gd,&gm,"");

  rectangle(x,y,x,y);
  delay(10);
  rectangle((x+sx*y),y,(x+sx*y),y;

  getch();
  closegraph();
}
