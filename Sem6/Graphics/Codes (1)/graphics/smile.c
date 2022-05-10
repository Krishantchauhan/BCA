#include<graphics.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	int x=getmaxx()/2, y=getmaxy()/2;
	setbkcolor(WHITE);
	setcolor(BLUE);
	cleardevice();

	int i=1;
	while(1){

	if(i==1){
		circle(x,y,100);

	circle(x-35,y-35,20);		//left eye
	circle(x+35,y-35,20);		//right eye

	circle(x-35,y-32,10);		// left eye ball
	circle(x+35,y-32,10);		// right eye ball
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(x-35,y-32,BLUE);
	floodfill(x+35,y-32,BLUE);

	floodfill(x+1,y+31,BLUE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x+1,y+1,BLUE);

		ellipse(x,y+50,0,180,70,50);
		i=0;
		delay(1000);
		cleardevice();
	}
	else{
		circle(x,y,100);

	circle(x-35,y-35,20);		//left eye
	circle(x+35,y-35,20);		//right eye

	circle(x-35,y-32,10);		// left eye ball
	circle(x+35,y-32,10);		// right eye ball
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(x-35,y-32,BLUE);
	floodfill(x+35,y-32,BLUE);

	floodfill(x+1,y+31,BLUE);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(x+1,y+1,BLUE);

	ellipse(x,y+30,180,360,70,50);
	i=1;
	delay(1000);
	cleardevice();
	}
	}

	getch();
	return 0;
}
