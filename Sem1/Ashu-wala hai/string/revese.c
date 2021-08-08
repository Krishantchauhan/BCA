#include<stdio.h>


void main()
{
    char str[100],str1[100]={0};
    int i,j=0,t;

    printf("Enter a string ");
    gets(str);

    strlen(str)=t;

    for(i=t-1;i>=0;i--)
    {
        str1[j]=str[i];
        j++;

    }
    str1[j]='\0';
    printf("the reverse of given string is %s\n",str1);
}
