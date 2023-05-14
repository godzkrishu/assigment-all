#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i;
    for (i = 1; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
