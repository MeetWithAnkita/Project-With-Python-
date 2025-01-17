#include<stdio.h>
void main()
{
    int arr01[100][100],arr02[100][100],r01,r02,c01,c02,i,j,flag;

    // take input from user for two matrix
    printf("Enter the row and column of first matrix: ");
    scanf("%d%d",&r01,&c01);
    printf("Enter %d values: ",(r01*c01));
    for(i=0; i<r01; i++)
    {
        for(j=0; j<c01; j++)
        {
            scanf("%d",&arr01[i][j]);
        }
    }
    printf("Enter the row and column of secons matrix: ");
    scanf("%d%d",&r02,&c02);
    printf("Enter %d values: ",(r02*c02));
    for(i=0; i<r02; i++)
    {
        for(j=0; j<c02; j++)
        {
            scanf("%d",&arr02[i][j]);
        }
    }
    
    // print two matrix one by one  
    printf("First matrix is: \n");
    for(i=0;i<r01;i++)
    {
        for(j=0; j<c01; j++)
        {
            printf("%d ",arr01[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is: \n");
    for(i=0;i<r02;i++)
    {
        for(j=0; j<c02; j++)
        {
            printf("%d ",arr02[i][j]);
        }
        printf("\n");
    }

    // check two matrix is equal or not
    if( (r01 != r02) || (c01 != c02) )
    {
        printf("Two matrix are not same becsuse of their un-equal row and column size.");
    }
    else
    {
        for(i=0;i<r01;i++)
        {
            for(j=0;j<c01;j++)
            {
                if(arr01[i][j] != arr02[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }  
        if (!flag)
        {
            printf("Two matrices are not same.");
        }
        else
        {
            printf("Two matrices are  same.");
        }
    }
}