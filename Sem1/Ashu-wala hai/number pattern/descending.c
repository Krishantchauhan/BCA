#include<stdio.h>
#define maxsize 100

void main()

{

    int a[maxsize],num,i,j,temp=0;

    printf("Enter the number of  values to be inputed  :  ");
    scanf("%d",&num);

    printf("Enter the value at each position one by one ");

    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
     printf("Enterd values in descending order  : ");
    for(i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }

}
