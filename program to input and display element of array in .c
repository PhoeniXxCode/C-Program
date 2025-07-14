#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n]; 
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nYou entered:\n");
    for (i = 0; i < n; i++)
    { 
        printf("%d\n", array[i]);
    }
    
    return 0;
