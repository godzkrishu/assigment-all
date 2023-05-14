#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input the lengths of the sides
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    // Check if the triangle is valid if sum of two side is greater than 3rd side
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
