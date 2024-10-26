#include <stdio.h>

int main() {
    int a, b;
    printf("ADD,SUB,MU,DIV\n\n");
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("\nResults..\n");
    printf("\nADD | a = %d", a+b);
    printf("\nSUB | a = %d", a-b);
    printf("\nMUL | a = %d", a*b);
    printf("\nDIV | a = %d(Q)", a/b);
    printf("\nDIV | a = %d(R)", a/b);
    printf("\n\n");
    return 0;
}
