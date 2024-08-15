#include <stdio.h>
#include <graphics.h>
int main()
{
	int a, b, r;
	int x, y, d;

	printf("enter the circle coordinates and radius");
	scanf("%d %d %d", &a, &b, &r);

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");

	x = 0;
	y = r;
	d = 3 - 2 * r;
	while (x < y)
	{
		x++;
		if (d >= 0)
		{
			y--;
			d = d + 4 * x - 4 * y + 10;
		}
		else
		{
			d = d + 4 * x + 6;
		}
		putpixel(x + a, y + b, RED);
		putpixel(-x + a, -y + b, RED);
		putpixel(-x + a, y + b, RED);
		putpixel(x + a, -y + b, RED);
		putpixel(y + a, x + b, RED);
		putpixel(-y + a, x + b, RED);
		putpixel(-y + a, -x + b, RED);
		putpixel(y + a, -x + b, RED);
	}
	getch();
	closegraph();
	return 0;
}
