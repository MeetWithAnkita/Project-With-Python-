// if T is the toral no of zero elements in elements in a matrix. and r and c is row and column number of a matrix.
// We can also assume that if [(m * n) / 2] elements are zero then it is a sparse matrix.
// if T >= ((m*n)/2) is true....we can say matrix is sparce matrix.

#include<stdio.h>
void main()
{
    int arr[100][100] , i,j,r,c,k,T,count=0 ;
    printf("Enter the row and column of a matrix : ");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is :\n",r,c);
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // check the matrix is sparce matrix or not
    for(i=0; i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    T = count;
    if (T >= ((r*c)/2))
    {
        printf("It is a sparce matrix.");
    }
    else
    {
        printf("It is not a sparce matrix.");
    }
}