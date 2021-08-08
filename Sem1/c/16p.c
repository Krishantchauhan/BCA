#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],i,s[10][10],j,r,c;
  printf("enter the rows \n");
  scanf("%d",&r);
//  int c;
  printf("enter the column\n" );
  scanf("%d",&c);

//input of an array

//first array
printf("enter  the first array \n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    scanf("%d \n",& a[i][j]);
  }
}

//second array
printf("enter the second array \n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    scanf("%d \n",& b[i][j]);
  }
}

//printing the sum of both array

for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  {
    s[i][j]=a[i][j]+b[i][j];
    printf("%d",s[i][j]);
  }
}




}
