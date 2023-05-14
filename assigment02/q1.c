#include <stdio.h>

int main()
{
    int n, unit;
     printf(" enter the number");
    scanf("%d", &n);
    unit = n % 10; // modulo 10
    printf("%d", unit);
    return 0;
}
