#include <stdio.h>
unsigned long long factorial(int number) {
    unsigned long long fact = 1;
    int i;

    for (i = 1; i <= number; i++) {
        fact *= i;
    }

    return fact;
}


unsigned long long calculateCombination(int n, int r) {
 
    return factorial(n) / (factorial(n-r)*factorial(r));
}

int main() {
    int n, r;
    unsigned long long result;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    result = calculateCombination(n, r);

    printf("Number of combinations: %llu\n", result);

    return 0;
}
