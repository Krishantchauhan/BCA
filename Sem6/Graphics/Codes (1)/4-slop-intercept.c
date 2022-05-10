#include<stdio.h>
void main(){
  float x1,x2,y1,y2,m;
  int x,y;

  printf("Enter the corr.\n");
  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

  m=(y2-y1)/(x2-x1);

  for(x=0;x<x2;x++)
  {
    y=m*(x-x1)+y1;
    printf("%d %d \n",x,y);
  }
}
