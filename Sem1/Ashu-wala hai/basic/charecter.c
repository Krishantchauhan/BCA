#include<stdio.h>

void main()
{

    char Ch;
    int A,total;

    printf("Enter the number and character ");
    scanf("%d %C",&A,&Ch);


    if(Ch =='S')
    {
        total=(A+100);
        printf("the total is %d",total);
    }

    else
    {
         printf("the total is %d",A);

    }

}
