#include<graphics.h>
#include<conio.h>
int x_min,y_min,x_max,y_max;
int bit(double ,double);
int co(double ,double* ,double* , double* ,double*);
int main()
{
	printf("Enter the Clipping Window Co-ordinates : ");
	scanf("%d %d %d %d",&x_min,&y_min,&x_max,&y_max);

	double x1,y1,x2,y2,slope;
	printf("Enter the Co-ordinates of Line : ");
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);


	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	rectangle(x_min,y_min,x_max,y_max);
	line(x1,y1,x2,y2);

	getch();

	cleardevice();


	int bit1 = bit(x1,y1);
	int bit2 = bit(x2,y2);

	if((bit1|bit2) == 0)
		outtextxy(200,200, "VISIBLE");

	else
		if((bit1&bit2)!= 0)
			outtextxy(200,200, "INVISIBLE");

	else{
		slope = ((y2-y1)/(x2-x1));

		if(bit1!=0)
			co(slope,&x1,&y1,&x2,&y2);

		if(bit2!=0)
			co(slope,&x2,&y2,&x1,&y1);

		outtextxy(200,200, "CLIPPED");
		}


	rectangle(x_min,y_min,x_max,y_max);
	line(x1,y1,x2,y2);

	getch();
	closegraph();
	return 0;
}

int bit(double x,double y)
{
	int bits = 0;
	if(y<y_min)
		bits=bits+8;
	else {
		if(y>y_max)
		bits=bits+4;
	}
	if(x>x_max)
		bits=bits+2;
	else{
		if(x<x_min)
		bits=bits+1;
	}

	return bits;
}

int co(double slope,double *x1,double *y1,double *x2,double *y2)
{

	if(*y1<y_min)
	{
		*y1=y_min;
		*x1=*x2-(*y2-*y1)/slope;
	}
	else {
		if(*y1>y_max)
		{
			*y1=y_max;
			*x1=*x2-(*y2-*y1)/slope;
		}
	}


	if(*x1>x_max)
	{
		*x1=x_max;
		y1=*y2-slope(*x2-*x1);
	}
	else{
		if(*x1<x_min)
		{
		*x1=x_min;
		y1=*y2-slope(*x2-*x1);
		}
	}

	return 0;
}
