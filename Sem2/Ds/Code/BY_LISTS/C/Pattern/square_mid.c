#include <stdio.h>
 void main()
   {
  int a[100][100],j,i ;
    for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      {
        if(i==1 && j==1)
        printf(" ");
        else
        printf("*");
      }
      printf("\n");
  }
}
