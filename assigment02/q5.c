#include <stdio.h>
int main()
{
    int n1;
    printf("enter the  number");
    scanf("%d", &n1);
    if ((n1&1)== 0)
        printf(" the number is even ");
    else
        printf(" the number is odd");
    return 0;
}