#include<stdio.h>

void main()
{
    int i,count=0;
    char ch[100];

    printf("Enter the alphabets  ");


    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
