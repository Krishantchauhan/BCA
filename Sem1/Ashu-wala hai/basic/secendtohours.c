#include<stdio.h>
void main()
{
    int a,hours,minutes,second;

    scanf("%d",&a);

    hours=a/3600;
    minutes=(a%3600)/60;
    second=(a%3600)%60;

    printf("%d\n%d\n%d",hours,minutes,second);
}
