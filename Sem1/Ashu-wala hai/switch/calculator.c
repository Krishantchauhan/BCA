#include<stdio.h>

void main()
{

    float a,b,Area;
    char ch;



    printf(" Press + for Addition\n ");
    printf("Press - for subtraction\n ");
    printf("Press * for multiplication\n ");
    printf("Press / for division\n ");


    ch=getchar();

    switch(ch)
        {
        case '+' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

            Area = (a+b);
            printf("Addition is %f",Area);

            break;

         case '-' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

            Area = (a-b);
            printf("Subtraction is %f",Area);

            break;

         case '*' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

            Area = (a*b);
            printf("Multiplication is %f",Area);

            break;

         case '/' :
            printf("enter the values   ");
            scanf("%f %f",&a,&b);

            Area = (a/b);
            printf("division is %f",Area);

            break;



        default :
            printf("Invalid value");
        }


}
