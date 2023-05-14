#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i, number = 2*N;
    for (i = 0; i < N; i++) {
        printf("%d ", number);
        number -= 2;
    }
    printf("\n");
    return 0;
}
