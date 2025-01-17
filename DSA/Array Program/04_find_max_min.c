#include<stdio.h>
void main()
{
    int n,i,max,min,arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max= min = arr[0];
    for(i=1; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }       
        if( arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Max element :%d \nMin element :%d",max,min);
}