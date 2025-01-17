#include<stdio.h>
#include<conio.h>
void main()
{
    int array_01[100],array_02[100],i,j,n;
    printf("How many elements in first array(array_01[]) ?");
    scanf("%d",&n);
    printf("Enter the %d elements in first array:",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&array_01[i]);
    }
    for(i=0; i<n; i++)
    {
        array_02[i] = array_01[i];
    }
    printf("After copy :\n2nd Array(array_02[]):");
    for(i=0; i<n; i++)
    {
        printf("\t%d",array_02[i]);
    }
}