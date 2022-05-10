#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	int j = getmaxx()-50;
	while(1)
	{
  	for(int i=50; i<j; i++)
  	{
    	circle(i,100,50);
    	delay(1);
    	cleardevice();
	   }
	  for(int k=j; k>50; k--)
	  {
		  circle(k,100,50);
		  delay(1);
		  cleardevice();
	  }
  }
	getch();
	closegraph();

	return 0;
}
