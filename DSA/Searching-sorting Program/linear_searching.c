#include<stdio.h>

void main()
{
    int arr[100],n,i,item;
    printf("Enter the no of array elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element: ");
    scanf("%d",&item);
    for ( i = 0; i < n; i++)
    {
        if(item == arr[i])
        {
            printf("Item found at %d.",i);
            break;
        }
    }
    
}