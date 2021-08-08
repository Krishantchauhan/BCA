#include<stdio.h>


void main()

{

    int row,col,i,j,num;


    printf("Enter the number of rows ");
    scanf("%d",&row);

    printf("Enter thye number of column ");
    scanf("%d",&col);

    int a[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


}
