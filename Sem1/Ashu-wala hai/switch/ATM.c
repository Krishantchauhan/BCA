#include<stdio.h>

void main()
{
    int a,c,notes;

    printf("enter a number   ");
    scanf("%d",&a);
    printf(" amount you want to take from note  ");
    scanf("%d",&c);

    switch(c)
        {


        case 2000 :
            notes=a/2000;
            printf("the number of 2000 notes are %d \n",notes);
            a=a%2000;


        case 500 :
            notes=a/500;
            printf("the number of 500 notes are %d  \n",notes);
            a=a%500;

         case 200 :
            notes=a/200;
            printf("the number of 200 notes are %d  \n",notes);
            a=a%200;

        case 100 :
            notes=a/100;
            printf("the number of 100 notes are %d  \n",notes);
            a=a%100;

         case 50 :
            notes=a/50;
            printf("the number of 50 notes are %d  \n",notes);
            a=a%50;

        case 20 :
            notes=a/20;
            printf("the number of 20 notes are %d  \n",notes);
            a=a%20;

        case 10 :
            notes=a/10;
            printf("the number of 10 notes are %d  \n",notes);
            a=a%10;

        case 5 :
            notes=a/5;
            printf("the number of 5 notes are %d  \n",notes);
            a=a%5;

        case 2 :
            notes=a/2;
            printf("the number of 2 notes are %d  \n",notes);
            a=a%2;

        case 1 :
            notes=a/1;
            printf("the number of 1 notes are %d  \n",notes);
            a=a%1;



        }

}
