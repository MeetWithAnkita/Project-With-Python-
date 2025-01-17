#include<stdio.h>
void main()
{
    int n,i,j,arr[100],temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // bubble sort use here >>>>>>>>>>>>>>>>>>
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if (arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array:");
    for(i=0; i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n2nd Largest array: %d",arr[1]);

}