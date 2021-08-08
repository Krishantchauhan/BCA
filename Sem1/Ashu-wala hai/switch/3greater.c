#include<stdio.h>

void main()
{

    int a,b,c;

    printf("Enter three values ");
    scanf("%d %d %d",&a,&b,&c);

    if((a>b)&&(a>c))
    {
        printf(" A %d is greater",a);
    }
    else if((b>a)&&(b>c))
    {
        printf(" B %d is greater",b);
    }
    else
    {
        printf(" C %d is greater",c);
    }


}
