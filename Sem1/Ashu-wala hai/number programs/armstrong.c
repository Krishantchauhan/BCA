#include<stdio.h>
#include<math.h>
void main()
{
    int a,r,mul=0,b;

    printf("Enter the number : ");
    scanf("%d",&a);

    b=a;

    while(a>0)
        {
            r=a%10;
            mul+=r*r*r;
            a=a/10;


        }
        if(mul==b)
        {
            printf("The Number %d is a arm strong number",b);
        }
        else
        {
            printf("the number %d is not a arm strong number",b);
        }



}
