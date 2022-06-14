#include<graphics.h>
#include<stdio.h>

int main()
{
	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	setcolor(14);
	circle(250,250,100);
	setfillstyle(SOLID_FILL,14);
	floodfill(250,250,14);

	setcolor(0);
	circle(215,225,5);
	circle(285,225,5);
	ellipse(250,260,180,360,70,50);
	setfillstyle(SOLID_FILL,0);
	floodfill(215,225,0);
	floodfill(285,225,0);

	getch();
	closegraph();
	return 0 ;

}
