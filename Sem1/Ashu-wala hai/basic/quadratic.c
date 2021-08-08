#include<stdio.h>
void main()
{
        int a,b,c,D;
        float x,y;

        printf("Enter three values   :  ");
        scanf("%d %d %d",&a,&b,&c);

        D=((b*b)-4*a*c);

        printf("The values of D is %d\n",D);

        if(D>0)
        {
            printf("Real and Distant root \n");
            x=(-b+sqrt(D))/2*a;
            printf("value of x is %f",x);

            y=(-b+sqrt(D))/2*a;
            printf("value of x is %f",x);

        }

        else if(D==0)
        {
            x=(-b/2*a);
            printf("Value of x is %f",x);

        }

        else
        {
            printf("imaginary roots");
        }

}
