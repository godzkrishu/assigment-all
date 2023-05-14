#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    do {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", num1 * num2);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0)
                    printf("Result: %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
                break;
        }

        printf("\n");

    } while (choice != 5);

    return 0;
}
