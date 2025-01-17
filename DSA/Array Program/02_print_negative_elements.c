#include<stdio.h>

void main ()
{
    int n,i,arr[100],count=0;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Only negative elements are:\t");
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {printf("%d\t",arr[i]);
        count++;
        }
    }
    printf("\nNumber of  negetive elements: %d",count);
}