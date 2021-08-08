#include<stdio.h>
void main()
{
  int i,j,a[8],imin,s,temp;
  printf("Enter the element for an array \n");
  for(i=0;i<8;i++)
  scanf("%d",&a[i]);
  for(i=0; i<8;i++)
  {
   imin=i;
    for(j=i+1;j<8;j++)
	  {
	   if(a[j]<a[imin])
	    {
 	     imin=j;
      }
	  }
 	  temp=a[imin];
    a[imin]=a[i];
    a[i]=temp;
  }
  printf("The Sorted array is \n");
  for(i=0;i<8;i++)
  printf("%d \n",a[i]);
}
