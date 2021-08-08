#include<stdio.h>

void main()
{

    char a;

    printf(" Enter  a character   ");
    scanf("%c",&a);

    if((a<=96)&&(a>=65))

    {
        a=a+32;
              printf("the value will be %c  ",a);
    }

    else if((a<=122)&&(a>=97))
    {

        a=a-32;

        printf("the value will be %c  ",a);
    }


}

