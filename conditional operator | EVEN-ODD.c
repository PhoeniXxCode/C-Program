#include <stdio.h>

int main(void) 
{
    int a;
    printf("Conditional Operator | Odd-Even\n\n");
    printf("Enter a: ");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("\nEVEN\n") : printf("\nODD\n");

    return 0;
}
