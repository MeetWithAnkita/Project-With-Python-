// Unique element means frequency of element is 1 
#include<stdio.h> 
void main()
{
    int arr[100],n,i,j,count ,frequency[100],visited = -1  ;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elementrs:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (i=0;i<n;i++)
    {
        count=1;
        if (frequency[i] == visited)
        {
            continue;
        }
        for ( j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j] )
            {
                count++;
                frequency[j] = visited;
            }
            frequency[i] = count;
        }        
    }

    for(i=0; i<n; i++)
    {
        if (frequency[i] != visited)
        {
            printf("%d repeated %d times.\n",arr[i],frequency[i]);
        }
    }

    // printf("duplicate numbers are :");
    // for (i=0 ; i<n ; i++)
    // {
    //     if (frequency[i] > 1 )
    //     {
    //         printf("%d\t",arr[i]);   
    //     }
    // }
    printf("Unique number: ");
    for (i=0; i<n; i++)
    {
        if(frequency[i] == 1)
        {
            printf("%d\t",arr[i]);
        }
    }

}