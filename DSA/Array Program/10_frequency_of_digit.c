#include<stdio.h>
int main() 
{
    int n, arr[100], i, j, count, frequency[100], visited = -1;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        frequency[i] = 0;  // Initialize the frequency array with 0
    }

    // Calculate frequency of each element
    for (i = 0; i < n; i++) 
    {
        count = 1;
        if (frequency[i] == visited) 
        {
            continue;  // If already visited, skip this element
        }
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                frequency[j] = visited;  // Mark as visited
            }
        }
        frequency[i] = count;  // Store the count of current element
    }

    // Print the frequency of each element
    printf("Frequency of elements:\n");
    for (i = 0; i < n; i++) 
    {
        if (frequency[i] != visited) 
        {
            printf("%d repeats %d times.\n", arr[i], frequency[i]);
        }
    }

    return 0;
}
