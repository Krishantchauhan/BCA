#include<stdio.h>

void main()
{
    int row,col,i,j;

    printf("Enter the number of rows\n");
    scanf("%d",&row);

    printf("Enter the number of coloumn\n");
    scanf("%d",&col);

    int a[row][col],b[row][col],c[row][col];

    printf("Enter the values of 1st matrix\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of 2nd matrix\n");

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=(a[i][j])*(b[i][j]);
        }
    }
    printf("output of both the strings \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
