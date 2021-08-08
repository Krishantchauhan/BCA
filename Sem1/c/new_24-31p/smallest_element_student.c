#include<stdio.h>
int main()
{
int arr[50],n,i;
int *ptr;
ptr=arr;
int min=*(ptr+i);
printf("Enter the no. of elements::");
scanf("%d",&n);
printf("Enter array elements \n");
for(i=0;i<n;i++)
{
  scanf("%d",ptr+i);
}
printf("The elements are:\n");
for(i=0;i<n;i++)
{
   printf("%d\t",*(ptr+i));
}
i=0;
while(i<n)
{
if(*(ptr+i)<=min)
min=*(ptr+i);
i++;
 }
printf("\n The smallest element is: \n");
printf("%d",min);
return 0;
}
