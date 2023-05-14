#include <stdio.h>

void printPrimeFactors(int number) {
    int factor = 2;

    while (factor <= number) {
        if (number % factor == 0) {
            printf("%d ", factor);
            number /= factor;
        } else {
            factor++;
        }
    }
}
int main() {
    printf("%s\n", containsDigit(12345, 3) ? "true" : "false");

    printPrimeFactors(36); // Output: 2 2 3 3

    return 0;
}
