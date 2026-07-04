#include <stdio.h>

int main() {
    int a, b;

    printf("Add, Sub, Multiply, Divide and Modulo of 2 numbers\n");

    printf("Enter first value (a): ");
    scanf("%d", &a);

    printf("Enter second value (b): ");
    scanf("%d", &b);

    printf("\nResults:\n");
    printf("Add     = %d\n", a + b);
    printf("Sub     = %d\n", a - b);
    printf("Multiply= %d\n", a * b);
    printf("Divide  = %d\n", a / b);
    printf("Modulo  = %d\n", a % b);

    return 0;
}
