#include<stdio.h>

void main()

{
    int a,t=0,i;

    printf("enter the number :");
    scanf("%d",&a);

    for(i=2;i<a;i++)

        if(a%i==0)
        {
           t++;
        }

        if(t==0)
        {
            printf("the number is a prime number\n");

        }
        else
        {
            printf("the number is not a prime number\n");
        }
}
