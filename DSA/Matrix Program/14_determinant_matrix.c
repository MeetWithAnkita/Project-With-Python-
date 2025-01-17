// a b     00 01
// c d     10 11
// here determinant of 2*2 matrix is : (ad - bc)


// a b c
// d e f
// g h i 
// determinant of 3*3 matrix is : a(ei - fh) - b(di - fg) + c(dh - eg)

#include<stdio.h>
void main()
{
    int arr[100][100], i ,j, row,column,sum=0,a,b,c,d,e,f,g,h,k ;
    printf("Enter the row and column of matrix:");
    scanf("%d%d",&row,&column);
    printf("Enter the %d elements: ",(row*column));
    for(i=0; i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The %d * %d matrix is :\n",row,column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    if (row==column)
    {
        if(row == 2 && column == 2)
        {
            a=arr[0][0];  b=arr[0][1];
            c=arr[1][0];  d=arr[1][1];
            {
                sum = (a*d - b*c);
            }
            printf("Summation of %d * %d matrix: %d",row,column,sum);
        }
        else if (row == 3 && column == 3)
        {
            a=arr[0][0];  b=arr[0][1]; c=arr[0][2];
            d=arr[1][0];  e=arr[1][1]; f=arr[1][2];
            g=arr[2][0];  h=arr[2][1]; k=arr[2][2];

            sum= ((a*(e*k - f*h)) - (b*(d*k - f*g)) + (c*(d*h - e*g))); 
            printf("Summation of %d * %d matrix: %d",row,column,sum);
        }
    }
    else
    {
        printf("sorry ! we can't calculate..");
    }
}