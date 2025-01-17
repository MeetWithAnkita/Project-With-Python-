#include<stdio.h>
void main()
{
    int n,i,arr[100],sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of all elements:%d",sum);

}