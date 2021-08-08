#include<stdio.h>
void main()
{
  int i,j,a[10][10],tras[10][10];
  printf("enter the matrix \n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d ",&a[i][j]);
    }
  }

/*  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++);
    {
    tras[i][j]=a[j][i];

    }
  }*/
printf("tran is ");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
    printf("%d",a[j][i]);

     }
     printf("\n" );
}


}
