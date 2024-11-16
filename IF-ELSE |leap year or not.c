#include <stdio.h>

int main(void) 
{
    int a;
    printf("IF-ELSE | LEAP YEAR\n\n");
    printf("Enter the year to check: ");
    scanf("%d", &a);  // Fixed the incorrect syntax in scanf
    if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))) 
    {
        printf("\nIt is a leap year");
    } 
    else 
    {
        printf("\nIt is not a leap year");
    }
    printf("\n\n");
    return 0;
}
