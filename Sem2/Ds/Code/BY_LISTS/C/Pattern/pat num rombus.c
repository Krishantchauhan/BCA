#include<stdio.h>
void main()
{
	int i,j,k,a,b=0;
	for(i=0;i<14;i=i+2)
	{
		for(k=0;k<6-b;k=k+2)
		{
			printf("  ");
		}
		a=1;
		for(j=0;j<=b;j++)
		{
			printf("%d ",a);
			if(j>=b/2)
			{
				a=a-1;
			}
			else
			{
				a=a+1;
			}
		}
		if(i>=6)
		{
			b=b-2;
		}
		else
		{
			b=b+2;
		}
		printf("\n");
	}
}
