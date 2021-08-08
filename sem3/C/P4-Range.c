#include<stdio.h>
float fun(float x){
  return((x*x*x)-4*x-1);
}


void main()
{
  int   i=0,p=0;
  float ai,bi;
  int pos;
  pos=0;
  while (1)
  {
    if(fun(i)==0){
      printf("Exact root %d",i);
    }
    if (fun(i)*fun(i+1)<0){
      pos++;
      break;
    }
    i++;
  }//while loop end
  if (pos) {
    ai=i;
    bi=i+1;
    printf("Range is %4f & %4f",ai,bi);
  }
  else
  printf("Range not found \n");

}
