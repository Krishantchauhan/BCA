#include<stdio.h>
void main()
{
  int i,j,k,n;
  //printf("Enter the size");
  //scanf("%d",&n);

  for(i=1;i<=4;i++)
  {
    for(j=i;j<=3;j++)
      printf(" ");
    for(k=1;k<=i;k++)
      printf("%d",k);
      for(k=i-1;k>=1;k--)
      printf("%d",k);
    printf("\n" );

  for(j=7;j>=i;j--)
    printf(" ");
  for(k=i;k>=1;k--)
    printf("%d",k);
    for(k=1;k<=i-1;k++)
    printf("%d",k);
    printf("\n");
   }

}
