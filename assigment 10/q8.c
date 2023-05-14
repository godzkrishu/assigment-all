#include <stdio.h>

unsigned long long calculateArrangement(int n, int r) {
    unsigned long long arrangements = 1;
    int i;

    for (i = n; i > n - r; i--) {
        arrangements *= i;
    }

    return arrangements;
}

int main() {
    int n, r;
    unsigned long long result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    result = calculateArrangement(n, r);

    printf("Number of arrangements: %llu\n", result);

    return 0;
}
