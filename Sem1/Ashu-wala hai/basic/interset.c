// calculate the simple interest and amount

#include<stdio.h>

void main()
{

    int p,r,t,SI,Amount;

    printf("Enter the value of P   ");
    scanf("%d",&p);

    printf("Enter the value of R   ");
    scanf("%d",&r);

    printf("Enter the value of T   ");
    scanf("%d",&t);

    SI=(p*r*t)/100;
    printf("the value of simple interest = %d \n",SI);

    Amount=(p+SI);
    printf("the amount is = %d ",Amount);

}
