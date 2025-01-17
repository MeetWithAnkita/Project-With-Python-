#include<stdio.h>
void main()
{
    int arr[100][100],r,c,i,j,temp ;
    printf("Enter the value of row and column :");
    scanf("%d%d",&r,&c);
    printf("Enter the %d elements: ",(r*c));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // interchange the diagonal
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j)
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][r-1-i];
                    arr[i][r-1-i] =temp;
                }
            }
        }
    }
    else
    {
        printf("Error !! It should be a squre matrix.");
    }

    printf("Enter the matrix after interchange diagonal :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }   
        printf("\n");
    }
}