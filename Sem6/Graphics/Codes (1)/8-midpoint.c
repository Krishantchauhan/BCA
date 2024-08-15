#include <stdio.h>
#include <graphics.h>
int main()
{
	int a, b, r;
	int x, y, d;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	printf("enter the circle coordinates and radius");
	scanf("%d %d %d", &a, &b, &r);
	x = 0;
	y = r;
	d = 1 - r;
	while (x < y)
	{
		x++;
		if (d >= 0)
		{
			y--;
			d = d + (2 * x) - (2 * y) + 1;
		}
		else
		{
			d = d + 2 * x + 1;
		}
		putpixel(x + a, y + b, RED);
		putpixel(x + a, -y + b, RED);
		putpixel(-x + a, -y + b, RED);
		putpixel(-x + a, y + b, RED);
		putpixel(y + a, x + b, RED);
		putpixel(y + a, -x + b, RED);
		putpixel(-y + a, x + b, RED);
		putpixel(-y + a, -x + b, RED);
	}

	for( int i=0;i<5;i++){		printf("Krish")
	}
	getch();
	closegraph();
	return 0;



}
