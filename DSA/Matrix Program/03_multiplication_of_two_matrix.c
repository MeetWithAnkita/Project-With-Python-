#include<stdio.h>

void main()
{
    int arr01[100][100], k, i, j, r01, c01, arr02[100][100], mul[100][100], r02, c02;

    // ////////create first matrix//////////
    printf("Enter the no of row in first matrix: ");
    scanf("%d", &r01);
    printf("Enter the no of column in first matrix: ");
    scanf("%d", &c01);

    printf("Enter the data in first matrix:\n");
    for(i = 0; i < r01; i++)
    {
        for (j = 0; j < c01; j++)
        {
            scanf("%d", &arr01[i][j]);
        }
    }

    // ///////////create second matrix ///////////

    printf("Enter the no of row in second matrix: ");
    scanf("%d", &r02);
    printf("Enter the no of column in second matrix: ");
    scanf("%d", &c02);

    printf("Enter the data in second matrix:\n");
    for(i = 0; i < r02; i++)
    {
        for (j = 0; j < c02; j++)
        {
            scanf("%d", &arr02[i][j]);
        }
    }

    // ///////////////print two matrices //////////////////

    printf("First Matrix is:\n");
    for(i = 0; i < r01; i++)
    {
        for (j = 0; j < c01; j++)
        {
            printf("%d\t", arr01[i][j]);
        }
        printf("\n");
    }

    printf("Second Matrix is:\n");
    for(i = 0; i < r02; i++)
    {
        for (j = 0; j < c02; j++)
        {
            printf("%d\t", arr02[i][j]);
        }
        printf("\n");
    }

    //////////////// Multiplication of two matrices /////////////
    if(c01 != r02)
    {
        printf("Error: Matrices cannot be multiplied.\n");
    }
    else 
    {
        for(i = 0; i < r01; i++)
        {
            for(j = 0; j < c02; j++)
            {
                mul[i][j] = 0;
                for(k = 0; k < c01; k++)  // c01 or r02 can be used interchangeably
                {
                    mul[i][j] += arr01[i][k] * arr02[k][j];
                }
            }
        }

        printf("Multiplication of two Matrices is:\n");
        for(i = 0; i < r01; i++)
        {
            for (j = 0; j < c02; j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
}


