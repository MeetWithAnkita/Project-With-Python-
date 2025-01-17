#include<stdio.h>
void main()
{
    int arr_01[100],arr_02[100], i,j,size_01,size_02; 
    printf("Enter the size of two array: ");
    scanf("%d %d",&size_01,&size_02);

    printf("Enter %d elements of first array : ",size_01);
    for(i=0 ; i<size_01; i++)
    {
        scanf("%d",&arr_01);
    }

    printf("Enter %d elements of second array : ",size_02);
    for(i=0 ; i<size_02; i++)
    {
        scanf("%d",&arr_02);
    }

    // for()

}