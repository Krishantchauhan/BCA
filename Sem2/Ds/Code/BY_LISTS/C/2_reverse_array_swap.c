#include<stdio.h>
int main()
{
int arr[100],n,i,temp,end;
printf("enter the size of array");
scanf("%d",&n);
end=n-1;
printf("enter the value of array");
for(i=0; i<n; i++)
{
  scanf("%d",&arr[i]);
}
for(i=0; i<n/2; i++)
{
  temp=arr[i];
  arr[i]=arr[end];
  arr[end]=temp;
  end--;
}
printf("Reverse array element are:\n");
for(i=0; i<n; i++)
{
	printf("%d\t",arr[i]);
}
}
