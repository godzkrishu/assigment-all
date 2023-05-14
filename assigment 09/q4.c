#include <stdio.h>

int isIsoscelesTriangle(int a, int b, int c) {
    if (a == b || a == c || b == c)
        return 1;
    else
        return 0;
}

int isRightAngledTriangle(int a, int b, int c) {
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        return 1;
    else
        return 0;
}

int isEquilateralTriangle(int a, int b, int c) {
    if (a == b && b == c)
        return 1;
    else
        return 0;
}

int main() {
    int choice;
    int side1, side2, side3;

    do {
        printf("Menu:\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice (a-d): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter three numbers: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isIsoscelesTriangle(side1, side2, side3))
                    printf("The given set of numbers are lengths of an isosceles triangle.\n");
                else
                    printf("The given set of numbers are not lengths of an isosceles triangle.\n");
                break;
            case 'b':
                printf("Enter three numbers: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isRightAngledTriangle(side1, side2, side3))
                    printf("The given set of numbers are lengths of a right-angled triangle.\n");
                else
                    printf("The given set of numbers are not lengths of a right-angled triangle.\n");
                break;
            case 'c':
                printf("Enter three numbers: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isEquilateralTriangle(side1, side2, side3))
                    printf("The given set of numbers are lengths of an equilateral triangle.\n");
                else
                    printf("The given set of numbers are not lengths of an equilateral triangle.\n");
                break;
            case 'd':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option (a-d).\n");
                break;
        }

        printf("\n");

    } while (choice != 'd');

    return 0;
}
