#include<stdio.h>

void main()
{

    int a[5],b[5],c[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter a number in first array  ");
        scanf("%d",&a[i]);

        printf("Enter a number in second array  ");
        scanf("%d",&b[i]);
    }



    for(i=0;i<5;i++)
    {
       c[i]=a[i]+b[i];
       printf("The sum is %d \n",c[i]);
    }


}


