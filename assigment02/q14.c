#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility by 7 and 3
    if (number % 7 == 0) {
        printf("%d is divisible by 7.\n", number);
    }

    else if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        printf("%d is not divisible by any of 3 or 7\n", number);
    }

    return 0;
}
