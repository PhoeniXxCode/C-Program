#include <stdio.h>

int main(void) 
{
    int num,absvalue;
    printf("Conditional Operator | ABSOLUTE VALUE\n\n");
    printf("Enter num: ");
    scanf("%d", &num);
    absvalue = (num>=0) ? num :-num;
 printf("\nAbsolute value = %d",absvalue); 
    return 0;
}
