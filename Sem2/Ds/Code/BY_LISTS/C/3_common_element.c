#include <stdio.h>
int main()
{
  int n;
puts("Enter Array Size\n");
scanf("%d",&n);
int a[n];
puts("Enter Array \n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);

	for(int i=0;i<=n;i++)
	{
	for(int j=i+1;j<=n;j++)
	{
		if(a[i]==a[j])
		printf("\n Common elements is %d",a[j]);
	}
}
	return 0;
}
