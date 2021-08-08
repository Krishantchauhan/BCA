#include <stdio.h>
void main()
{
    int l,i,j,a[100],temp=0;
    printf("enter the limit\n");
    scanf("%d",&l);

    for(i=0;i<l;i++)
    {
      printf("Ente the %dth element\n",i+1 );
      scanf("%d",& a[i]);
    }

    printf("Elements of original array: \n");
    for ( i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }

    for ( i = 0; i < l; i++) {
        for ( j = i+1; j < l; j++) {
           if(a[i] > a[j]) {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }
    printf("\n");

    printf("Array after Sorting in acending order\n");
    for ( i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

}
