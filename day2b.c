#include <stdio.h>
#define PI 3.14   // Define the value of π (pi)

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;              // Formula for area
    circumference = 2 * PI * radius;          // Formula for circumference

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
