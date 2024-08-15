#include <graphics.h>
int main()
{
	int x1, y1, x2, y2;
	printf("Enter starting point:\n");
	scanf("%d%d", &x1, &y1);
	printf("\nEnter end point:\n");
	scanf("%d%d", &x2, &y2);
	int dy = (y2 - y1), dx = (x2 - x1);
	float slope = (float)dy / dx;
	int d = 2 * dy - dx;

	int gd = DETECT, gm;
	initgraph(&gd, &gm, (char *)"");

	if (slope < 1)
	{
		while (x1 != x2)
		{
			putpixel(x1, y1, RED);
			if (d >= 0)
			{
				d = d + 2 * dy - 2 * dx;
				y1++;
			}
			else
				d = d + 2 * dy;
			x1++;
		}
	}
	else 
	{
		while (y1 != y2)
		{
			putpixel(x1, y1, RED);
			if (d >= 0)
			{
				d = d + 2 * dy - 2 * dx;
				x1++;
			}
			else
				d = d + 2 * dy;
			y1++;
		}
	}
	getch();
	closegraph();
}
