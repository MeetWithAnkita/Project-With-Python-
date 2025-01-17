#include<stdio.h>
void main()
{
    int n,arr[100],i,j,location, item;

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&location);

    printf("Enter the number which you want to insert :");
    scanf("%d",&item);

    for (i=n-1; i>=location; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[location] = item ;

    printf("After insertion Array is :");
    for (i=0;i<n+1; i++)
    {
        printf("%d\t",arr[i]);
    }
    

}
