#include<stdio.h>

void main()
{

    int a[100],i,max,t=0,n;

    printf("Enter the number of numbers to inputted");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter a number  : ");
        scanf("%d",&a[i]);
    }
        max=a[0];

    for(i=1;i<n;i++)
    {
        if(max<a[i])
           {
            max=a[i];
           }
    }
        printf("The value %d is greater",max);

}
