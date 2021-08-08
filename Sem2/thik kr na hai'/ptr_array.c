#include <stdio.h>
void main()
{
  int   a[3]={10,20,30};
  int *ptr[3];
  int i;
  for ( i = 0; i < 3; i++) {
    ptr[i]=&a[i];
  }
  for ( i = 0; i < 3; i++) {
    printf("%d\n",*ptr[i]);

  }
}
