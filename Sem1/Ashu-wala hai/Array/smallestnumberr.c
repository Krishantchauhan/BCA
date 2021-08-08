#include<stdio.h>

void main()
{

    int a[5],i,min,t=0;

    for(i=0;i<5;i++)
    {
        printf("Enter a number   ");
        scanf("%d",&a[i]);
    }
        min=a[0];

    for(i=1;i<5;i++)
    {
        if(min>a[i])
           {
            min=a[i];
           }
    }
        printf("The value %d is smallest",min);

}

