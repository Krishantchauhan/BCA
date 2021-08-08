#include <stdio.h>
 void main()
 {
  int a[100],i,s,t,j ;
	printf("Enter the size of an array\n");
	scanf("%d",&s);
	printf("Enter the %d Elements\n",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < s; i++)
  {
		for ( j = 0; j < s-i; j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
}
