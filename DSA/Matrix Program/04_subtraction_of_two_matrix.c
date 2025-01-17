#include<stdio.h>
void main()
{
    int arr01[100][100],arr02[100][100],sub[100][100],r01,r02,c01,c02,i,j ;

    // create first matrix
    printf("Enter the row & column of first matrix: ");
    scanf("%d%d",&r01,&c01);
    printf("Enter %d valus: ",(r01*c01));
    for(i=0;i<r01;i++)
    {
        for(j=0;j<c01;j++)
        {
            scanf("%d",&arr01[i][j]);
        }
    }

    // create second matrix
    printf("Enter the row & column of second matrix: ");
    scanf("%d%d",&r02,&c02);
    printf("Enter %d valus: ",(r02*c02));
    for(i=0;i<r02;i++)
    {
        for(j=0;j<c02;j++)
        {
            scanf("%d",&arr02[i][j]);
        }
    }
    // print two matrix
    printf("First matix is: \n");
    for(i=0;i<r01;i++)
    {
        for(j=0;j<c01;j++)
        {
            printf("%d ",arr01[i][j]);
        }
        printf("\n");
    }
    printf("Second matix is: \n");
    for(i=0;i<r02;i++)
    {
        for(j=0;j<c02;j++)
        {
            printf("%d ",arr02[i][j]);
        }
        printf("\n");
    }

    // subtraction perform 
    if((r01!=r02) || (c01!=c02))
    {
        printf("Error!!");
    }
    else
    {
        for(i=0;i<r01;i++)
        {
            for(j=0;j<c01;j++)
            {
                sub[i][j]=arr01[i][j]-arr02[i][j];
            }
        }

        // print the subtraction result
        printf("Subtraction of two matrix: \n");
        for(i=0;i<r01;i++)
        {
            for(j=0;j<c01;j++)
            {
                printf("%d ",sub[i][j]);
            }
            printf("\n");
        }  
    }

   

}