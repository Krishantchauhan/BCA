#include <stdio.h>
int hcf(int n1,int n2)
{
	if(n2!=0)
	return hcf(n2,n1%n2);
	else
	return(n1);
}
int main()
{
	int n1,n2;
	printf("\n enter two numbers ");
	scanf("%d%d",&n1,&n2);
	printf("GCD is %d",hcf(n1,n2));
	return 0;
}
