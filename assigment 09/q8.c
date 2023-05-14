#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch(number >= 0) {
        case 1:
            number = -number;
            printf("Converted number: %d\n", number);
            break;
        case 0:
            number = -number;
            printf("Converted number: %d\n", number);
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
