#include <stdio.h>
int fibo(int n)
{
	if(n==0||n==1)
	return(n);
	else
	return(fibo(n-1)+fibo(n-2));
}
int main()
{
	int i,n,m=0;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fibo(m));
		m++;
	}
	return 0;
}
