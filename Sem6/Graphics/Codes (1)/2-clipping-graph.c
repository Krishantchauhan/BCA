#include<graphics.h>
int x_min,y_min,x_max,y_max;
int bit(int , int);
int main()
{
	printf("Enter the Clipping Window Co-ordinates : ");
	scanf("%d %d %d %d",&x_min,&y_min,&x_max,&y_max);

	int x1,y1,x2,y2;
	printf("Enter the Co-ordinates of Line : ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	rectangle(x_min,y_min,x_max,y_max);
	line(x1,y1,x2,y2);

	int bit1 = bit(x1,y1);
	int bit2 = bit(x2,y2);

	if((bit1|bit2) == 0)
		outtextxy(200,200, "VISIBLE");
	else
  {
	if((bit1&bit2) != 0)
			outtextxy(200,200, "INVISIBLE");
	else
		outtextxy(200,200, "CLIPPING CANDIDATE");
	}
	getch();
	closegraph();
}
int bit(int x,int y)
{
	int bits = 0;
	if(y<y_min)
		bits=bits+8;
	if(y>y_max)
		bits=bits+4;
	if(x>x_max)
		bits=bits+2;
	if(x<x_min)
		bits=bits+1;

	return bits;

}
