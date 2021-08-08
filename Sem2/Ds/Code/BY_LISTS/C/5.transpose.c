#include <stdio.h>
int main()
{
	int a[5][5],t[5][5],i,j,m,n;
	printf("\n ENTER ROWS AND COLUMNS");
	scanf("%d%d",&m,&n);
	printf("ENTER A MATRIX");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j]=a[j][i];
		}
	}
printf("transpose of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
}
return 0;
}
