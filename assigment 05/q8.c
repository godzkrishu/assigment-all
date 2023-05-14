#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i;
    for (i = 1; i <= N; i++) {
        printf("%d^2 = %d\n", i, i*i);
    }
    return 0;
}
