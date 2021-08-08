#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c;
  printf("Enter the cofficient of x^2\n");
  scanf("%f",&a);

  printf("Enter the cofficient of x\n");
  scanf("%f",&b);

  printf("Enter the Constant\n");
  scanf("%f",&c);
  double x;

  x=((-b+sqrt((b*b)-(4*a*c)))/2*a);

  double y;
  y=((-b-sqrt((b*b)-(4*a*c)))/2*a);

  printf("%lf\n",x);
  printf("%lf\n",y);


}
