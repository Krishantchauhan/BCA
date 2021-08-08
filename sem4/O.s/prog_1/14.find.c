#include<stdio.h>

void main()
{

    int a[100],i,search,t=0,n;

    printf("enter the size \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter a number  \n");
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be search  \n ");
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
            printf("the position of element in array is %d \n ",i);

        }
        else
        {
            printf("Invalid value\n");

        }
}
