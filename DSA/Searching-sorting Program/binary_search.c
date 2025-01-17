#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void bs(int a[],int n, int k,int l,int u)
{   int m;
    if(l<u)
    {  m=(l+u)/2 ;
       if(a[m]==k)
         {
             printf("Item found at index %d.",m);
         }
        else if (a[m]<k)
        {
            bs(a,n,k,m+1,u);
        }
        else
        {
            bs(a,n,k,l,m-1);
        }
    }
}
void main()
{
    int a[100],n,k,l,m,u,i ;
    printf("size of array :");
    scanf("%d",&n);
    printf("Enter the element of array in sorted ::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("searching element ::");
    scanf("%d",&k);
    l=0;
    u=n-1 ;
    bs(a,n,k,l,u)   ;
}