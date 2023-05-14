#include <stdio.h>

int main() {
   int n1, n2, n3,n;
    printf(" eneter the three numbers ");
    scanf("%d%d%d",&n1,&n2,&n3);
    int greatest=(n3>(n=(n1>n2)?n1:n2)?n3:n);
     printf(" the greatest among all is %d",greatest);
    return 0;
}
