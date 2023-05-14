#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i, count = 0;
    for (i = 1; count < N; i += 2) {
        printf("%d ", i);
        count++;
    }
    printf("\n");
    return 0;
}
