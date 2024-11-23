#include <stdio.h>

int main(void) 
{
    int a, b, choice;

    printf("Switch-Case | Menu Driven Calculator\n\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nMenu Options:");
    printf("\n1: Add");
    printf("\n2: Subtract");
    printf("\n3: Multiply");
    printf("\n4: Divide");
    printf("\n5: End");
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("\nResult: a + b = %d\n", a + b);
            break;
        case 2:
            printf("\nResult: a - b = %d\n", a - b);
            break;
        case 3:
            printf("\nResult: a * b = %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("\nResult: a / b = %d (Quotient), %d (Remainder)\n", a / b, a % b);
            else
                printf("\nError: Division by zero is not allowed.\n");
            break;
        case 5:
            printf("\nThank you!\n");
            break;
        default:
            printf("\nInvalid Input!\n");
            break;
    }

    return 0;
}
