#include<stdio.h>
void main()
{
    int i,arr[100],n,location;
    printf("Enter the number of elements in array :");
    scanf("%d",&n);
    printf("Enter the number of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the location of index,which element you want to delete:");
    scanf("%d",&location);

    for(i=location; i< n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    printf("After deletion %dth position element:",location);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}