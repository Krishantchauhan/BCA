// student data

#include<stdio.h>

void main()
{
    float Math,Chem,English,Comp,Hindi,Per,total;

    printf("Enter marks in Maths  ");
    scanf("%f",&Math);
    printf("Enter marks in Chemistry  ");
    scanf("%f",&Chem);
    printf("Enter marks in English  ");
    scanf("%f",&English);
    printf("Enter marks in Computer  ");
    scanf("%f",&Comp);
    printf("Enter marks in Hindi  ");
    scanf("%f",&Hindi);

    total = (Math+Chem+English+Comp+Hindi);
    printf("Total marks are   %f \n",total);

    Per = ( total/5);
    printf("Percentage is   %f\n",Per);

    if(Per>=60)
    {
        printf("The division is 1");
    }

    else if((Per>=50)&&(Per<60))
    {
        printf("The division is 2");
    }

    else if(Per>=40&&(Per<50))
    {
        printf("The division is 3");
    }

    else
    {
        printf("The Student is fail");
    }

}
