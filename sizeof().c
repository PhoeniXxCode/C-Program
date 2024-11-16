#include <stdio.h>

int main(void) 
{
    int a;
    char b;
    double c;

    printf("sizeof() operator in C\n\n");
    printf("Size of integer: %zu\n", sizeof(a));
    printf("Size of character: %zu\n", sizeof(b));
    printf("Size of double: %zu\n", sizeof(c));

    printf("\n");
    return 0;
}
