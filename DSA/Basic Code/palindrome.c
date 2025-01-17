#include<stdio.h>
void main()
{
    int no, actual_no, reverse_no, reminder;
    printf("Enter the number: ");
    scanf("%d",&no);

    actual_no= no;
    reverse_no=0;
    while(no != 0)
    {
        reminder = no % 10 ;
        reverse_no = reverse_no *10 + reminder;  
        no = no / 10 ;  
    }

    if (actual_no == reverse_no)
    {
        printf("%d is palindrome no.",actual_no);
    }
    else
    {
        printf("%d is not palindrome no.",actual_no);
    }
    
}