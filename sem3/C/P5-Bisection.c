#include<stdio.h>
#include<math.h>

double bisection( double x)
{
    return (x*x*x  -9*x  +1);
}

int main()
{
    double a,b;

    printf("\nEnter the first approximation to the root :  ");
    scanf("%lf",&a);

    printf("\nEnter the second approximation to the root :   ");
    scanf("%lf",&b);

    int times;
    printf("\nEnter the number of iteration you want to perform :   ");
    scanf("%d",&times);

    int ctr=1;
    double x=a;
    double y=b;
    double mid,f1,f2,f3;

    if(bisection(x)==0)
        mid=x;
    else if(bisection(y)==0)
        mid=y;
    else
    {
        while(ctr<=times)
        {

            f1=bisection(x);
            mid=(x+y)/2.0;
            f2=bisection(mid);
            f3=bisection(y);

            if(f2==0)
            {
                mid=f2;
                break;
            }
            printf("The root after %d iteration is %lf \n",ctr,mid);

            if(f1*f2<0)
                y=mid;
            else if(f2*f3<0)
                x=mid;
            ctr++;
        }
    }
    printf("\n\nThe approximation to the root is %lf\n",mid);
}
