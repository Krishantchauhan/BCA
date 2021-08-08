#include <stdio.h>
 void main()
 {
  int a[100],i,s,b[100],j ;
printf("Enter the size of an array");
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<s;i++)
{
  for ( j = i+1; j < s; j++) {
    if (a[i]==a[j])
    {
      printf("%d\t",a[j]);
    }
  }
}
}
