#include<stdio.h>
#include <math.h>

void main()

{
    int a,t=0,i;

    printf("enter the number   ");
    scanf("%d",&a);

    for(i=2;i<sqrt(a);i++)
    {
        if(a%i==0)
        {
            printf("the number is not a prime number\n");
           t=1;
           break;
        }
    }
        if(t==0)
        {
            printf("the number is a prime number\n");

        }


}
