#include<stdio.h>
int main()
{
	int a[100],n,i,num,count=0;
	printf("Enter number of element ");
	scanf("%d",&n);
	printf("\n enter value of element\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter occurence elements of array");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		count++;
	}
		printf("occurence of number this %d are in %d times",num,count);
	return 0;
}
5
