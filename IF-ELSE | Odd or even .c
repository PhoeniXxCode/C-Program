#include <stdio.h>

int main(void) 
{
    int a;
    printf("IF-ELSE|ODD-EVEN\n\n");
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0) 
    {
        printf("\nNumber is Even");
    } 
    else 
    {
        printf("\nNumber is Odd");
    }

    printf("\n\n");
    return 0;
}
