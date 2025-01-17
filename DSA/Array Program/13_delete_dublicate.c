#include<stdio.h>
void main()
{
    int n,arr[100],i,j,k,count,visited=-1,frequency[100];

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n;i++)
    {
        count=1;
        if(frequency[i] == visited)
        {
            continue;
        }
        for ( j = i+1; j < n ; j++)
        {
            if (arr[i] == arr[j])
            {
                for(k=j; k<n-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--; k--;

            }
        }
        frequency[i]=count;
        
    }

 
    
    printf("Without duplication array :");
    for(i=0; i<n; i++)
    {
       printf("%d\t",arr[i]);

    }
}    