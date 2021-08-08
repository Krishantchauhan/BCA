#include<stdio.h>
int main()
{
  int i, p, s,a[100],add;
  printf("Enter the size of an array\n");
  scanf("%d",&s);
  printf("Enter an array\n");
  for(i = 0; i < s ; i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Enter the position to add\n");
  scanf("%d",&p);
  printf("Enter the value to add\n");
  scanf("%d",&add);
  for(i=s-1;i>=p-1; i--)
  a[i+1]=a[i];

a[p-1]=add;

    printf("Resultant array:\n");

    for (i=0;i<=s; i++)
       printf("%d\n", a[i]);

return 0;
}
