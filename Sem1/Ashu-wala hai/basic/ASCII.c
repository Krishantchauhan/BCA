#include<stdio.h>
int main()
{
int i=0;
char ch;

    while(i<256)
    {
    printf("%c=%d\t",ch,i);
    i=i+1;
    ch=ch+1;
}
return 0;
}
