#include <stdio.h>

int checkEvenOdd(int number) {
    if (number % 2 == 0) {
        return 1; // Even number
    } else {
        return 0; // Odd number
    }
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = checkEvenOdd(number);

    if (result == 1) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
