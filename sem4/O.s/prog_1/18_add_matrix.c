#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],i,s[10][10],j,r,c;
  printf("enter the rows \n");
  scanf("%d",&r);

  printf("enter the column\n" );
  scanf("%d",&c);


printf("enter  the first array \n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    scanf("%d",&a[i][j]);
  }
}

printf("enter the second array \n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    scanf("%d",&b[i][j]);
  }
}

for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    s[i][j]=a[i][j]+b[i][j];
  }
}

for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
      printf("%d\t",s[i][j]);
  }
  printf("\n" );

}

}
