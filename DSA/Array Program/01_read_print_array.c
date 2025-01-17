#include<stdio.h>

void main()
{
    int n,i,arr[100];
    printf("Enter the number of elements in array :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array is:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}