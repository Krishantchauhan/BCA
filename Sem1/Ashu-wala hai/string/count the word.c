#include<stdio.h>
#include<string.h>

void main()
{

    char ch[100],len,i,count=0;
    printf("enter the string   ");
    gets(ch);

    len=strlen(ch);
    for(i=0;i<len;i++)
    {
        if(ch[i]!=' ' && ch[i+1]==' ')
            count++;
    }
    printf("the count of string is%d",count);
}
