#include<stdio.h>
void main()
{
    int n,arr[100],odd_no=0,even_no=0,i,j,odd[50],even[50];
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter %d elements:\t",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
            {
                even[even_no]=arr[i];    //firstly, I store the even elements in even[] array then print... 
                even_no++;
            }
        else
            {
                odd[odd_no]=arr[i];
                odd_no++;
            }    
    }
    printf("Number of Even elements:%d",even_no);
    printf("\nEven elements are :");
    for(j=0; j<even_no; j++)
    {
        printf("\t%d",even[j]);
    }
    printf("\nNumber of Odd elements:%d",odd_no);
    printf("\nOdd elements are :");
    for(j=0; j<odd_no; j++)
    {
        printf("\t%d",odd[j]);
    }

    

}