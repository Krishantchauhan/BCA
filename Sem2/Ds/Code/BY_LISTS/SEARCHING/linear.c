#include <stdio.h>
 void main()
 {
  int a[100],i,s,data ;
	printf("Enter the size of an array\n");
	scanf("%d",&s);
	printf("Enter the %d Elements\n",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the data to Search\n");
	scanf("%d",&data);
	i=0;
	while (a[i]!=s)
	{
		if (a[i]==data)
		{
			printf("At Position %d :\n",i+1);
			break;
		}
		i++;
		if (i==s)
		  printf("Element Not Found\n");
	}
}
