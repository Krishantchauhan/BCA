#include<graphics.h>
#include<stdio.h>

int scalmatrix(int, int);
int xy_matrix(int ,int);
int matrix_multiply(int *,int *);

int scaling_matrix[3][3];
int xy[3];

int main()
{
	int x,y,radius;
	printf("enter the co-ordinates and radius of circle : ");
	scanf("%d %d %d",&x,&y,&radius);

	int sx,sy,new_radius;
	printf("enter scaling : ");
	scanf("%d %d %d",&sx,&sy,&new_radius);


	scalmatrix(sx,sy);
	xy_matrix(x,y);


	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	circle(x,y,radius);

	outtextxy(200,200,"Press enter for scaling");
	getch();
	cleardevice();


	matrix_multiply(&x,&y);
	radius=radius*new_radius;
	circle(x,y,radius);

	getch();
	closegraph();
	return 0;

}

int scalmatrix(int sx,int sy)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==0&&j==0)
				scaling_matrix[i][j]=sx;
			else if(i==1&&j==1)
				scaling_matrix[i][j]=sy;
			else if(i==2&&j==2)
				scaling_matrix[i][j]=1;
			else
				scaling_matrix[i][j]=0;
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
			sum=(scaling_matrix[i][j]*xy[j])+ sum;
		}
		xy[i]=sum;
	}
	*x=xy[0];
	*y=xy[1];
}
