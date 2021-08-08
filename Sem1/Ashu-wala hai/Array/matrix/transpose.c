#include<stdio.h>
void main()
{

    int row,col,i,j;

    printf("enter the values of rows   :");
    scanf("%d",&row);

    printf("enter the no. of column    :");
    scanf("%d",&col);


    int a[row][col];

    printf("enter the values of a matrix\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    printf("before transpose\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);

        }
        printf("\n");
    }

    printf("after transpose\n");

     for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d",a[j][i]);

        }
         printf("\n");
    }



}
