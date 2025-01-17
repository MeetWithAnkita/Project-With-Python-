#include<stdio.h>
void main()
{
    int arr[100][100],i,j,r,c,isupper=0,sum=0 ;

    printf("Enter the row and column of a matrix :");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d * %d matrix is:\n",r,c);
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // check matrix is upper triangle or not 
    // 00 01 02
    // 10 11 12
    // 20 21 22
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if((i>j) & arr[i][j]==0)
            // An upper triangular matrix is a square matrix where all the entries below the main diagonal are zero
            {
                isupper=1;
            }
        }
    }
    if (isupper==1)
    {
        printf("The matrix is upper triangle.");
        // sum of upper triangular matrix
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if((i<j) && (arr[i][j]!=0))
                {
                    sum += arr[i][j];
                }
            }
        }
        printf("\nSummetion of upper triangular matrix:%d",sum);

    }
    else{
        printf("This is not upper triangle matrix.");
    }
}