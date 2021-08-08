#include<stdio.h>

void main()
{
    int a,count=0;

    printf("Enter a number    ");
    scanf("%d",&a);

    while(a!=0)
{
    count++;
    a=a/10;




}
 printf("%d",count);
}
