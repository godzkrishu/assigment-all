#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        number++; // Increment the even number by 1 to make it odd
    }

    printf("Converted number: %d\n", number);

    return 0;
}
