#include<stdio.h>
void main()
{
    int arr[100][100],r,c,i,j,sum=0;

    printf("Enter the row and column of matrix: ");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // summetion of each row
    printf("..........Sum of Column.........\n");
    for(i=0; i<r ;i++)
    {
        sum=0;
        for(j=0; j<c; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of %d row elements: %d\n",(i+1),sum);
    }
    // summetion of each column 
    printf("..........Sum of Column.........\n");
    for(j=0; j<c; j++)
    {
        sum=0;
        for(i=0; i<r ;i++)
        {
            sum += arr[i][j];
        }
        printf("Sum of %d column elements: %d\n",(j+1),sum);
    } 


}