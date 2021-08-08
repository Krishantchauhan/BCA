#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100],i,com=0,pt,len;


    printf("Enter the Alphabet in a string ");
    gets(ch);

    len=strlen(ch);
    printf("Enter the Alphabet to find ");
    scanf("%s",&pt);


    for(i=0;i<len;i++)
    {
        if(pt==ch[i])
            {
                com=1;
                break;
            }

    }
             if(com==1)
               {
                    printf("it is available at position %d ",i+1);
               }
            else
               {
                    printf("Inavlid Alphabet ");
               }
}
