#include<stdio.h>

void main()

{
    int a,r,sum=0;

    printf("enter the number   ");
    scanf("%d",&a);

    while(a!=0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
        printf("%d",sum);





}
