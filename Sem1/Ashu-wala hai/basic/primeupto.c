#include<stdio.h>

void main()
{

    int a,i,j,b;

    printf("Enter a number   ");
    scanf("%d",&a);

    printf("\n prime number upto %d are",a);

 for(i=1;i<a;i++)
  {
        b=0;
      for(j=1;j<=i;j++)
      {
           if(i%j==0)
           b++;
      }
        if(b==2)
            printf("\n %d",i);

  }



}

