#include<stdio.h>
void main()
{
  int i,j,a[10][10],tras[10][10];
  printf("enter the matrix");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++);
    {
      scanf("%d",&a[i][j]);
    }
  }

printf("tran is ");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++);
     {
    printf("%d",a[j][i]);

     }
     printf("\n" );
}


}
