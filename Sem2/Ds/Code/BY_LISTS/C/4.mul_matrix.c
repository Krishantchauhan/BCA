#include<stdio.h>
void main()
{
int m,n,p,q,i,j,k,sum=0,a[10][10],b[10][10],c[10][10];
printf("Enter number of row and column of first matrix\n");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix\n");
for(i=0; i<m; i++)
{
	for(j=0; j<n; j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("Enter number of rows and columns of second matrix\n");
scanf("%d%d",&p,&q);
if(n!=p)
printf("The multiplication is not possible:\n");
else
{
printf("Enter elements of second matrix:\n");
}
for(i=0; i<p; i++)
{
	for(j=0; j<q; j++)
             scanf("%d",&b[i][j]);
}
for(i=0; i<m; i++)
{
for(j=0; j<q; j++)
{
	for(k=0; k<p; k++)
		sum=sum+a[i][k]*b[k][j];
		c[i][j]=sum;
	sum=0;
}
}
printf("product of the matrices:\n");
for(i=0; i<m; i++)
{
for(j=0; j<q; j++)
{
	printf("%d\t",c[i][j]);
}

printf("\n");}}
