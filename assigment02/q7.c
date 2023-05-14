#include <stdio.h>

int main() {
    double a, b, c, discriminant; // double is using becouse the discriminant  contain point 
// here ax^2+bx+c=0
    // Input the coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
    } else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
