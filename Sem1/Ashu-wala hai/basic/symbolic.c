#include<stdio.h>
#define PI 3.14

void main()
{

    float r,area,perimeter;

    printf("enter the value of R   ");
    scanf("%f",&r);

    area=(PI*r*r);
    printf("The Area of circle is %f\n",area);

    perimeter=(PI*2*r);
    printf("The Perimeter of circle is %f",perimeter);

    // enter the value of R   2
    // The Area of circle is 12.560000
    // The Perimeter of circle is 12.560000
    // Process returned 36 (0x24)   execution time : 1.438 s
}
