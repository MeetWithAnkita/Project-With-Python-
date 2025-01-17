//    1 0 0
//    0 1 0
//    0 0 1
// this is unit matrix or identity matrix .
#include<stdio.h>
void main()
{
    int arr[100][100],i,j,row,column,isunit=1 ;
    printf("Enter the row and column of a matrix: ");
    scanf("%d%d",&row,&column);
    printf("Enter the %d elements: ",(row*column));
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is: \n",row,column);
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    // Check the matrix is unit matrix or identity matrix or not 
    if (column != row) 
    {
        printf("It's wrong because it's not a squre.");
    }
    else
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                if ( ((i==j) && (arr[i][j] != 1)) || ((i != j) && (arr[i][j] != 0))  )
                {
                    isunit=0;  
                    break ;
                }    
            }
            if (!isunit) 
                break;
        }
        if (isunit)
        {
            printf("This matrix is unit matrix.");
        }
        else
        {
            printf("This matrix is not unit matrix. ");
        }
    }
  
}