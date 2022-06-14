#include<graphics.h>

int main()
{
	int gd = DETECT , gm ;
	initgraph(&gd , &gm , (char*)"");

	for(int i=1;i<=300;i++)
	{

	cleardevice();

	circle(100+i,350,25);
	circle(250+i,350,25);

	line(70+i,270,70+i,325);
	line(70+i,270,280+i,270);
	line(70+i,325,280+i,325);
	line(280+i,270,280+i,325);

	delay(3);
}

	for(int i=300;i>=1;i--)
	{
	cleardevice();

	circle(100+i,350,25);
	circle(250+i,350,25);

	line(70+i,270,70+i,325);
	line(70+i,270,280+i,270);
	line(70+i,325,280+i,325);
	line(280+i,270,280+i,325);


	delay(3);
}

	getch();
	closegraph();
	return 0;
}
