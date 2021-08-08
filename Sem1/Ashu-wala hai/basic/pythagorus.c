#include<stdio.h>

void main()
{

    int h,b,p;

    printf("Enter the value of h :  ");
    scanf("%d",&h);

    printf("Enter the value of b :  ");
    scanf("%d",&b);

    printf("Enter the value of p :  ");
    scanf("%d",&p);

    if((h*h)==(b*b)+(p*p))

        printf("They are sides of triangle  ");

    else

        printf("They are not sides of triangle ");

}
