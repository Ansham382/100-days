#include <stdio.h>

int main(void) {
    double length, breadth;
    printf("Enter length: ");
    if (scanf("%lf", &length) != 1) {
        fprintf(stderr, "Invalid input for length\n");
        return 1;
    }
    printf("Enter breadth: ");
    if (scanf("%lf", &breadth) != 1) {
        fprintf(stderr, "Invalid input for breadth\n");
        return 1;
    }

    if (length < 0 || breadth < 0) {
        fprintf(stderr, "Length and breadth must be non-negative\n");
        return 1;
    }

    double area = length * breadth;
    double perimeter = 2.0 * (length + breadth);

    printf("Area:      %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}