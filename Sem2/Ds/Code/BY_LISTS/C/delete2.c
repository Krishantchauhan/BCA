#include<stdio.h>
int main()
{
  int i, p, s,a[100];
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  printf("Enter an array\n");
  for(i = 0; i < s ; i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Enter the position of Deletion \n");
  scanf("%d",&p);
    if(p >= s+1)
  printf("Deletion is not possible\n");
  else
  {
  for(i = p - 1 ; i < s -1; i++)
    a[i] = a[i+1];
    printf("Resultant array:\n");
    for (i = 0; i < s - 1; i++)
       printf("%d\n", a[i]);
}
return 0;
}
