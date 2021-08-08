#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],i,j,c[10][10];
  printf("enter the 1st array");
      for(i=0;i<2;i++)
        for(j=0;j<3;j++)
         {
           printf("Enter element a%d%d: ", i + 1, j + 1);
           scanf("%d",&a[i][j]);
         }

  printf("enter the second array");
    for(i=0;i<2;i++)
      for(j=0;j<3;j++)
       {
        printf("Enter element a%d%d: ", i + 1, j + 1);
        scanf("%d",&b[i][j]);
        }

     for(i=0;i<2;i++)
       for(j=0;j<3;j++)
       {
         c[i][j]=a[i][j]+b[i][j];
       }

  printf("\nSum of two matrices: \n");
     for(i=0;i<2;i++){
       for(j=0;j<3;j++)
       {
         printf("%d ",c[i][j] );
       }
       printf("\n");}

}
