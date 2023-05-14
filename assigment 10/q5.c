#include <stdio.h>

void printOddNaturalNumbers(int N) {
    int i, count = 0;

    for (i = 1; count < N; i += 2) {
        printf("%d ", i);
        count++;
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d odd natural numbers are: ", N);
    printOddNaturalNumbers(N);

    return 0;
}
