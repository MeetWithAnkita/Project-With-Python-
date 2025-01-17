// | 1 2 3 | T        | 1 2 3 |
// | 2 4 5 |     =    | 2 4 5 |
// | 3 5 8 |          | 3 5 8 |

#include<stdio.h>
void main()
{
    int arr[100][100], i,j,r,c,A[100][100], isSymmetric=1 ;

    printf("Enter the row and column of a matrix :");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is :\n");
    for(i=0; i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    if (r == c)
    {
        //  check the matrix is symmetric or not 
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            // store the data of arr[][] in A[][]
           A[i][j] = arr[j][i];
        }
    }
    for(i=0; i<r ; i++)
    {
        for(j=0; j<c; j++)
        {
            if (arr[i][j] != A[i][j])
            {
                isSymmetric = 0 ;
                break;
            }
        }
        if(!isSymmetric)
        break;
    }
    if (isSymmetric == 1)
    {
        printf("The Matrix is Symmetric matrix.");
    }
    else
    {
        printf("The Matrix is not Symmetric Matrix.");
    }
    }
    else
    {
        printf("Its not squre matrix so we can't evaluate...");
    }

}