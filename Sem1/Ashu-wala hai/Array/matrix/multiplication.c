#include<stdio.h>
void main()

{
   int row1,col1,col2,row2,i,j,k,sum=0;

    printf("Enter the data for first matrix\n");

    printf("enter the no. of rows to be inputted  ");
    scanf("%d",&row1);

    printf("enter the no. of columns to be inputted  ");
    scanf("%d",&col1);

    printf("\n");

    printf("Enter the data for second matrix\n");

    printf("enter the no. of rows to be inputted  ");
    scanf("%d",&row2);

    printf("enter the no. of columns to be inputted  ");
    scanf("%d",&col2);

    printf("\n");

     int a[row1][col1],b[row2][col2],mul[row1][col2];

    if(col1==row2)
    {
        printf("Enter the values for 1st matrix");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("enter the values of 2nd matrix");
       for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                for(k=0;k<row2;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                mul[i][j]=sum;
                sum=0;
            }
        }

        printf("Multiplication of the matrix is \n ");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }


    }
    else
    {
        printf("not possible ");
    }


}
