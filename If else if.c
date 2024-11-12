#include <stdio.h>

int main() {
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You chose option 1.\n");
    } else if (choice == 2) {
        printf("You chose option 2.\n");
    } else if (choice == 3) {
        printf("You chose option 3.\n");
    } else {
        printf("Invalid option.\n");
    }

    return 0;
}
