#include<stdio.h>

void main()
{
    int arr[100][100], i,j,r,c ;
    printf("Enter the no of row in matrix: ");
    scanf("%d",&r);
    printf("Enter the no of column in matrix: ");
    scanf("%d",&c);

    printf("Enter the data in matrix:");
    for(i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}