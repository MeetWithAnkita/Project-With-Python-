#include<stdio.h>
void main()
{
    int arr[100][100],i,j,r,c,sum=0;
    printf("Enter the number of row and column: ");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    // print the matrix in form
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // sum of diagonal minor element
    if(r==c)
    {
        for (i = 0; i < r; i++) 
        {
            sum += arr[i][r-1-i]; // Accessing minor diagonal elements
        }
        printf("Sum of minor diagonal elements: %d",sum);
    }
    else
    {
        printf("No of row and column are not equl, so there is no possible to calculate the minor diagonal sum. ");
    }
}