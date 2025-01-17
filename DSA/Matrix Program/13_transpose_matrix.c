#include<stdio.h>
void main()
{
    int arr[100][100], transposed[100][100];
    int i, j, r, c;

    printf("Enter the row and column of a matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter the %d elements: ", (r * c));
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d * %d matrix is:\n", r, c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Transpose of the matrix (for non-square matrix)
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            transposed[j][i] = arr[i][j];
        }
    }

    printf("The matrix after transpose:\n");
    for(i = 0; i < c; i++) // Rows of transposed matrix become columns of original
    {
        for(j = 0; j < r; j++) // Columns of transposed matrix become rows of original
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}