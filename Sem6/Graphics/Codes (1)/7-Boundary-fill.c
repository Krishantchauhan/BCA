#include <stdio.h>
#include <graphics.h>
void boundaryfillalgo(int, int, int, int);
int main()
{
	int x, y, boundary, fill;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	printf("Enter the value of x,y");
	scanf("%d%d", &x, &y);
	printf("Enter the boundary color (1-15) ");
	scanf("%d", &boundary);
	printf("enter fill color");
	scanf("%d", &fill);
	circle(x, y, 50);
	boundaryfillalgo(x, y, fill, boundary);
	getch();
	closegraph();
	return 0;
}
void boundaryfillalgo(int x, int y, int fill, int boundary)
{
	if (getpixel(x, y) != boundary && getpixel(x, y) != fill)
	{
		putpixel(x, y, fill);
		boundaryfillalgo(x, y - 1, fill, boundary);
		boundaryfillalgo(x, y + 1, fill, boundary);
		boundaryfillalgo(x + 1, y, fill, boundary);
		boundaryfillalgo(x - 1, y, fill, boundary);
	}
}
