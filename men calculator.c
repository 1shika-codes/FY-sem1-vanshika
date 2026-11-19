#include <stdio.h>

int main() {
    int num1, num2, choice;

    // Input two numbers first
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Display menu and get choice
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform operation and match the exact output format
    switch (choice) {
        case 1:
            printf("addition is %d\n", num1 + num2);
            break;
        case 2:
            printf("subtraction is %d\n", num1 - num2);
            break;
        case 3:
            printf("multiplication is %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("division is %d\n", num1 / num2);
            } else {
                printf("division by zero is not allowed\n");
            }
            break;
        default:
            printf("invalid choice\n");
    }

    return 0;
}
