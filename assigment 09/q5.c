#include <stdio.h>

int main() {
    int var;

    printf("Enter the value of var: ");
    scanf("%d", &var);

    switch(var) {
        case 1:
            printf("good\n");
            break;
        case 2:
            printf("better\n");
            break;
        case 3:
            printf("best\n");
            break;
        default:
            printf("invalid\n");
            break;
    }

    return 0;
}

