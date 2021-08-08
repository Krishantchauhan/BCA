#include<stdio.h>
int main()
{
  char a[100];
  int i;
  printf("enter a string");
  for(i=0;i<5;i++)
  {
    scanf("%s",&a[i]);
  }
  printf("the entered is= %s",a);
  return 0;
}
