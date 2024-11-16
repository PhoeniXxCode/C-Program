#include <stdio.h>

int main(void) 
{
    int a = 6;
    printf("Bitwise shift operator in C\n\n");
    printf("Original value of a: %d\n", a);
    printf("<< a by 1 position: %d\n", a << 1);  // Left shift
    printf(">> a by 1 position: %d\n", a >> 1);  // Right shift
    printf("\n");
    return 0;
}
