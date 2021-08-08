#include<stdio.h>

void main()
{

    int a;

    printf("Enter a year  :  ");
    scanf("%d",&a);

    if((a%400==0 )||( a%4==0 && a%100!=0))
		{
			printf("This Year is a Leap year");
		}

		else
		{
			printf("This year is not a Leap Year");
		}


}
