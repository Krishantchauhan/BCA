#include<stdio.h>
#include<graphics.h>
#include<maths.h>
void main()
{
  int gd=DETECT,gm;

  int angle;
  printf("%d",angle);

  angle=(angle*3.14)/180;

  initgraph(&gd,&gm,"");

  rectangle(200,200,300,300);
  delay(10);
  rectangle(200,200,(300-200)*cos(angle)-(300-200)*sin(angle),(300-200)*sin(angle)+(300-200)*cos(angle));

  getch();
  closegraph();
}
