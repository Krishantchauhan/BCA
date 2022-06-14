#include<graphics.h>
#include<stdio.h>

int main()
{
	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	int x,y;
	x=getmaxx()/2;
	y=getmaxy()/2;

	for(int i=30;i<200;i++)
	{

	delay(100);

	setcolor(i/10);

	arc(x,y,0,180,i-10);
}
	getch();
	closegraph();
	return 0 ;

}
