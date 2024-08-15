#include <stdio.h>
#include <graphics.h>
void floodfillalgo(int, int, int, int);
int main()
{
	int x, y, oldcolor, fillcolor;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	printf("Enter the value of x,y: ");
	scanf("%d %d", &x, &y);
	printf("Enter the old color 0 :  ");
	scanf("%d", &oldcolor);
	printf("enter fill color ");
	scanf("%d", &fillcolor);
	circle(x, y, 50);
	floodfillalgo(x, y, oldcolor, fillcolor);
	getch();
	closegraph();
	return 0;
}
void floodfillalgo(int x, int y, int oldcolor, int fillcolor)
{
	if (getpixel(x, y) == oldcolor)
	{
		putpixel(x, y, fillcolor);
		floodfillalgo(x, y - 1, oldcolor, fillcolor);
		floodfillalgo(x, y + 1, oldcolor, fillcolor);
		floodfillalgo(x + 1, y, oldcolor, fillcolor);
		floodfillalgo(x - 1, y, oldcolor, fillcolor);
	}
}
