#include<stdio.h>

void main()
{
    int arr01[100][100], i,j,r01,c01,arr02[100][100],sum[100][100],r02,c02 ;

    // ////////create first matrix//////////
    printf("Enter the no of row in first matrix: ");
    scanf("%d",&r01);
    printf("Enter the no of column first in matrix: ");
    scanf("%d",&c01);

    printf("Enter the data in first matrix:");
    for(i=0; i<r01; i++)
    {
        for (j=0; j<c01; j++)
        {
            scanf("%d",&arr01[i][j]);
        }
    }

    // ///////////create second matrix ///////////

    printf("Enter the no of row in second matrix: ");
    scanf("%d",&r02);
    printf("Enter the no of column second in matrix: ");
    scanf("%d",&c02);

    printf("Enter the data in second matrix:");
    for(i=0; i<r02; i++)
    {
        for (j=0; j<c02; j++)
        {
            scanf("%d",&arr02[i][j]);
        }
    }

    // ///////////////print two matrix //////////////////

    printf("First Matrix is:\n");
    for(i=0; i<r01; i++)
    {
        for (j=0; j<c01; j++)
        {
            printf("%d\t",arr01[i][j]);
        }
        printf("\n");
    }


    printf("Second Matrix is:\n");
    for(i=0; i<r02; i++)
    {
        for (j=0; j<c02; j++)
        {
            printf("%d\t",arr02[i][j]);
        }
        printf("\n");
    }
    

    if ((r01==r02) && (c01==c02))
    {
    // ////////////sum of two matrix//////////////
     for(i=0; i<r02; i++)
    {
        for (j=0; j<c02; j++)
        {
            sum[i][j]=arr01[i][j] + arr02[i][j];
        }
    } 
    printf("Summetion of two Matrix is:\n");
    for(i=0; i<r01; i++)
    {
        for (j=0; j<c01; j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    }
    else
    {
        printf("It is not possible.");
    }
}