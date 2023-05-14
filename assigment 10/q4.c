#include <stdio.h>

void printNaturalNumbers(int N) {
    int i;

    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The first %d natural numbers are: ", N);
    printNaturalNumbers(N);

    return 0;
}
