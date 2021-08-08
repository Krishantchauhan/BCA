#include<stdio.h>

void main()
{
    int a,year,days,weaks;

    printf("Enter the total days ");
    scanf("%d",&a);

    year=a/365;
    weaks=(a%365)/7;
    days=(a%365)%7;

    printf("year %d weaks %d days %d",year,weaks,days) ;
}
