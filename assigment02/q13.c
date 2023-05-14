#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility by 3 and 2
    if (number % 3 == 0 && number % 2 == 0) {
        printf("%d is divisible by both 3 and 2.\n", number);
    } else if (number % 3 == 0) {
        printf("%d is divisible by 3 but not divisible by 2.\n", number);
    } else if (number % 2 == 0) {
        printf("%d is divisible by 2 but not divisible by 3.\n", number);
    } else {
        printf("%d is neither divisible by 3 nor divisible by 2.\n", number);
    }

    return 0;
}
