// Swap two numbers by using third variable c.

#include<stdio.h>
void main()
{

    int a,b,c;

    printf("Enter two values    \n");
    scanf("%d %d",&a,&b);

    printf("Before Swapping the value of a and b are %d and %d",a,b) ;

    c=a;
    a=b;
    b=c;

     printf("\n  After Swapping the value of a and b are %d and %d",a,b);


}

                                OUTPUT
/*
    Enter two values
    12
    13
    Before Swapping the value of a and b are 12 and 13
    After Swapping the value of a and b are 13 and 12
    Process returned 52 (0x34)   execution time : 3.685

*/
