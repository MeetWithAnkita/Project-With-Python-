#include<stdio.h>
void main()
{
    int arr[100][100],r,c,i,j,k,mul[100][100] ;

    printf("Enter the row and column: ");
    scanf("%d%d",&r,&c);
    printf("Enter %d value: ",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the scaler factor: ");
    scanf("%d",&k);
    printf("The matrix is :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c;j++)
        {
            printf("%d ",arr[i][j]) ;
        }
        printf("\n");
    }
    // scaler multiplication
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j] = arr[i][j] * k;
        }
    }

    // print the scaler matrix result
    printf("Scaler multiplication matrix: \n");
    for(i=0; i<r; i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

}