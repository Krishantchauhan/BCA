#include<stdio.h>

void main()
{
    int a,b=1,c;

    printf("Enter a number");
    scanf("%d",&a);

    while(b<=10)
{
    c=(a*b);
    printf("\n%d*%d=%d",a,b,c);
    b++;
}

}
