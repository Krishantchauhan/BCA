#include<stdio.h>
#include<math.h>

float bisection( float x)
{
    return (x*x*x  -9*x  +1);
}

void main() {
  float a,b,mid;
  float f0,f1,f2;
  int i=0;
  printf("\nEnter the first approximation to the root :  ");
  scanf("%lf",&a);

  printf("\n\nEnter the second approximation to the root :   ");
  scanf("%lf",&b);

  do
  {
    f0=bisection(a);
    f1=bisection(b);
    mid=(f0+f1)/2;
    f2=bisection(mid);
    if (f0*f1<0)
      b=mid;
    else
      a=mid;
    i++;
    printf("The number of iteration is %lf ",i);
    printf("Root %lf ",mid);
    printf("value of function %lf \n",f2);
  }
  while(fabs(f2)>0.001);
}
