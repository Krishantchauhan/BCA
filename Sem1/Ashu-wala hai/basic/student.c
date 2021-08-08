// student data

#include<stdio.h>

void main()
{
    float Math,Chem,Engli,Comp,Hin,Per,total;

    printf("Enter marks in Maths  ");
    scanf("%f",&Math);
    printf("Enter marks in Chemistry  ");
    scanf("%f",&Chem);
    printf("Enter marks in English  ");
    scanf("%f",&Engli);
    printf("Enter marks in Computer  ");
    scanf("%f",&Comp);
    printf("Enter marks in Hindi  ");
    scanf("%f",&Hin);

    total = (Math+Chem+Engli+Comp+Hin);
    printf("Total marks are   %f \n",total);

    Per = ( total/5);
    printf("Percentage is   %f",Per);

}
