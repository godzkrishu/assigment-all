#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i;
    for (i = 2; i <= 2*N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
