#include<graphics.h>
#include<stdio.h>

int transmatrix(int, int);
int xy_matrix(int ,int);
int matrix_multiply(int *,int *);

int translation_matrix[3][3];
int xy[3];

int main()
{
	int x,y,radius;
	printf("enter the co-ordinates and radius of circle : ");
	scanf("%d %d %d",&x,&y,&radius);

	int tx,ty;
	printf("enter transaltion : ");
	scanf("%d %d",&tx,&ty);

	transmatrix(tx,ty);
	xy_matrix(x,y);

	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	circle(x,y,radius);

	outtextxy(200,200,"Press enter to transalate");
	getch();
	cleardevice();

	matrix_multiply(&x,&y);
	circle(x,y,radius);

	getch();
	closegraph();
	return 0;
}

int transmatrix(int tx,int ty)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
				translation_matrix[i][j]=1;
			else
				translation_matrix[i][j]=0;

				translation_matrix[0][2]=tx;
				translation_matrix[1][2]=ty;
		}
	}
}
int xy_matrix(int x,int y)
{
	xy[0]=x;
	xy[1]=y;
	xy[2]=1;
}
int matrix_multiply(int *x,int *y)
{
	int multi[0][3];
	int sum;

	for(int i=0;i<3;i++)
	{
		sum=0;
		for(int j=0;j<3;j++)
		{
			sum=(translation_matrix[i][j]*xy[j])+ sum;
		}
		xy[i]=sum;
	}
	*x=xy[0];
	*y=xy[1];
}
