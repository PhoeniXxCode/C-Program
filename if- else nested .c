#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    printf("If-Else | Max of Three\n");
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }

    printf("\nMAX = %d\n\n", max);
    return 0;
}
