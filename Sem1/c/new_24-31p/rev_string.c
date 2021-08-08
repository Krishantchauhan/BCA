#include<stdio.h>
int main()
{
  int i,j;
  char a[50];
  printf("enter the string max is 50");
  scanf("%s",&a);
  for(i=0;a[i]!='\0';i++);
    printf("the reverse string is:: ");
    for(j=i-1;j>=0;j--)
    printf("%c",*(a+j));
    return 0;
  }
