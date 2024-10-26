#include <stdio.h>

int main() {
    float r;
    const float pi=3.142;
    printf("Circle calculation\n\n");
    printf("Enter radius:");
    scanf("%f", &r);
    printf("\nResults..\n");
    printf("\nRadius | a = %f",r);
    printf("\nDiameter | a = %f",2*r);
    printf("\nCircumeference | a = %f",2*pi*r);
    printf("\nArea | a = %f",pi*r*r);
    printf("\n\n");
    return 0;
}
