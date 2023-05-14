#include <stdio.h>

 #define PI 3.14159

float calculateCircleArea(float radius) {
    float area;
   

    area = PI * radius * radius;

    return area;
}

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculateCircleArea(radius);

    printf("Area of the circle: %.2f\n", area);

    return 0;
}
