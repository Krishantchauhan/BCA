#include<stdio.h>
int main()
{ int i,j;
char str[50];
printf("Enter string:: ");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++);
printf("The reverse of string is :: ");
for(j=i-1;j>=0;j--)
printf("%c",*(str+j));
return 0;
}
