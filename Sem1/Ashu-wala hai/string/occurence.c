#include<stdio.h>

void main()
{

    int i,count=0,a,b;
    char str[100],str1[100],temp[100];


    printf("Enter the string ");
    gets(str);

    printf("Enter the word to find its occurence");
    gets(str1);

    a=strlen(str);
    b=strlen(str1);
    if(a>=b)
    {
        for(i=0;i<a;i++)
        {
            strncpy(temp,str+i,b);
            temp[b]='\0';
            if(strcmp(str1,temp)==0)
                count++;
        }
        printf("given substring occured %d times ",count);
    }
    else
        printf("Enterd substring is more than givenm string");

}
