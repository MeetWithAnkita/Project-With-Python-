#include<stdio.h>
void main()
{
    int arr[100][100],i,j,c,r,islower=0,sum=0;
    printf("Enter the row and column of matrix :");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements:",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is:\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // check the matrix is lower triangle or not
    // 00 01 02
    // 10 11 12
    // 20 21 22
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0; j<c; j++)
            {
                if ((i<j) && (arr[i][j] == 0))
                // A lower triangular matrix is a square matrix with all elements above the main diagonal equal to zero
                {
                    islower=1;
                }
            }
        }
    }
    else
    {
        printf("Error !! It is not an squre matrix.");
    }
    if(islower==1)
    {
        printf("It is a lower triangular matrix.");
        // sum of element of lower matrix
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if( (i<j) && (arr[i][j] != 0))
                {
                    sum += arr[i][j];
                }
            }
        }
        printf("\nSum of lower triangle matrix :%d",sum);
    }
    else
    {
        printf("It is not a lower triangle matrix.");
    }
}