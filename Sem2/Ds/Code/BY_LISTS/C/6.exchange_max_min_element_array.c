#include<stdio.h>
int main()
{
int a[100],max,min,i,maxpos,minpos,temp,n;
printf("enter the size of array  ");
scanf("%d",&n);
printf("enter the value of array ");
for(i=0; i<n; i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			minpos=i;
		}
	}
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	printf("After interchange array elemnts are:  ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}
