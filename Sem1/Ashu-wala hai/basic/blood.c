#include<stdio.h>

void main()
{

    int A,W;

    printf("Enter your Age And Weight   ");
    scanf(" %d  %d",&A,&W);

    if((A>18)&&(W>40))
    {
        printf("He is eligible");
    }
    else
    {
        printf("He is not eligible");

    }


}
