#include<stdio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm;

  int tx,ty;
  printf("Enter the tx corrdiantes ");
  scanf("%d",&tx);

  printf("Enter the ty corrdiantes ");
  scanf("%d",&ty);

  initgraph(&gd,&gm,"");

  rectangle(200,400,200,400);
  delay(10);
  rectangle(200*tx,400*ty,200*tx,400*ty);

  getch();
  closegraph();
}
