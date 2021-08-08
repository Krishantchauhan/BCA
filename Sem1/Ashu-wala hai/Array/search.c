#include<stdio.h>

void main()
{

    int a[100],i,search,t=0,n;

    printf("enter the value ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter a number  ");
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be search   ");
    scanf("%d",&search);


    for(i=1;i<=n;i++)
    {
        if(search==a[i])
        {
            t=1;
            break;
        }
    }
    if(t==1)
        {
            printf("the position of element in array is %d  ",i);

        }
        else
        {
            printf("Invalid value");

        }




}



