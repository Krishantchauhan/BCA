#include<stdio.h>


void main()
{
    float a,b,r,Area;
    char ch;

    printf(" Press 1 for Area of rectangle\n ");
    printf("Press 2 for Area of square\n ");
    printf("Press 3 for Area of triangle\n ");
    printf("Press 4 for Area of circle\n ");

    ch=getchar();

    switch(ch)
        {
        case '1' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

            Area = (a*b);
            printf("area of rectangle is %f",Area);

            break;

         case '2' :
            printf("enter the values   ");
            scanf("%f",&a);

            Area = (a*a);
            printf("area of square is %f",Area);

            break;


         case '3' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

           Area = 0.5*(a*b);
            printf("area of triangle is %f",Area);

            break;


         case '4' :
            printf("enter the values   ");
            scanf("%f",&a);

            Area = (3.14*a*a);
            printf("area of circle is %f",Area);

            break;

        default :
            printf("Invalid value");
        }




}
