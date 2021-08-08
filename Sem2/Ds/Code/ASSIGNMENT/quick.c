//Name:Krishant Chauhan
//course:BCA 2A
//Class Roll no.:-29
//Quick Sort Program
#include <stdio.h>
 void main()
 {
  int a[100],i,s;
	printf("\n Name:Krishant Chauhan\n course:BCA 2A\n Class Roll no.:-29\n Single Linked List Program\n");
	printf("Enter the size of an array\n");
	scanf("%d",&s);
	printf("Enter the %d Elements\n",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
  printf("\nGiven array is \n");
  display(a,s);
	int lb=0;
	sort(a,lb,s-1);
	printf("\nSorted Array Is \n");
  display(a,s);
}
void swap(int* a,int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partion(int a[],int lb,int ub)
{
	int pivat=a[lb];
	int start=lb;
	int end=ub+1;
	while (start<end)
	{
		while (a[start]<=pivat)
		{
			start++;
		}
		while (a[end]>pivat)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	return end;
}
void sort(int a[],int lb,int ub)
{
	if (lb<ub)
	{
		int store;
		store=partion(a,lb,ub);
		sort(a,lb,store-1);
		sort(a,store+1,ub);
	}
}
void display(int a[],int s)
{
	int i;
	for ( i = 0; i < s; i++)
	{
		printf("%d\t",a[i]);
	}
}
