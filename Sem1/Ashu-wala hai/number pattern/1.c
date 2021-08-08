#include<stdio.h>

void main()

{
    int number=0,i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
        number++;
        printf("%d  ",number);
        }

        printf("\n");
    }
    
}
