#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Exchange without temp\n\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b); // a=2, b=3
    // Swapping process
    a=a+b;//a=5,b=3
    b=a-b;//a=5,b=2
    a=a-b;//a=3,b=2
    printf("\nNow a = %d", a);
    printf("\nNow b = %d", b);
    return 0;
}
