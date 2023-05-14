#include <stdbool.h>

bool containsDigit(int number, int digit) {
    while (number != 0) {
        int currentDigit = number % 10; // Extract the last digit

        if (currentDigit == digit) {
            return true; // Digit found
        }

        number /= 10; // Remove the last digit
    }

    return false; // Digit not found
}

int main() {
    int number = 12345;
    int digit = 3;

    if (containsDigit(number, digit)) {
        printf("The number contains the digit %d\n", digit);
    } else {
        printf("The number does not contain the digit %d\n", digit);
    }

    return 0;
}
