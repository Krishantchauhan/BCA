#include<stdio.h>
#include<math.h>
void main()
{
    double absolute, relative, percent, trueval, appx;
    printf("Enter true value");
    scanf("%lf",&trueval);
    printf("Enter approx value");
    scanf("%lf",&appx);
    absolute=fabs(trueval-appx);
    relative=absolute/trueval;
    percent=relative*100;
    printf("Absolute error = %lf \n",absolute);
    printf("Relative error = %lf \n",relative);
    printf("Percentage error = %lf  \n",percent);
}
