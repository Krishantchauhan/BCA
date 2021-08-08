#include<stdio.h>

void main()
{
    int a,b,total;
    char ch;
    printf("Enter two values  :");
    scanf("%d %d",&a,&b);

    printf("  + for Addition\n");
    printf("  - for Subtraction\n");
    printf("  * for multiplication\n");
    printf("  / for Devision\n");
    printf("  % for remainder\n");

    ch=getchar();

    switch(ch)
    {

    case '+' :
        total=a+b;
        printf("%d is the sum ",total);


    }



}
