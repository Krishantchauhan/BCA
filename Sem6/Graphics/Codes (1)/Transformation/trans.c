#include<stdio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm;
  int x=50;
  int y=50;
  int radius =50;

  int tx,ty;
  printf("Enter the tx corrdiantes ");
  scanf("%d",&tx);

  printf("Enter the ty corrdiantes ");
  scanf("%d",&ty);

  initgraph(&gd,&gm,"");

  circle(x,y,radius);
  delay(10);
  circle(x+tx,y+ty,radius);

  getch();
  closegraph();
}
