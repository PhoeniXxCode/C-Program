#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Exchange using temp\n\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b); // a=2, b=3

    // Swapping process
    temp = a; // temp = 2
    a = b;    // a = 3
    b = temp; // b = 2

    printf("\nNow a = %d", a);
    printf("\nNow b = %d", b);
    return 0;
}
