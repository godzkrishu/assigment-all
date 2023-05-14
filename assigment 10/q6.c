#include <stdio.h>

unsigned long long factorial(int number) {
    unsigned long long fact = 1;
    int i;

    for (i = 1; i <= number; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int number;
    unsigned long long result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("Factorial of %d: %llu\n", number, result);

    return 0;
}
