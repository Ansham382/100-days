#include <stdio.h>

int main(void) {
    double a, b;
    if (printf("Enter first number: ") < 0) return 1;
    if (scanf("%lf", &a) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    if (printf("Enter second number: ") < 0) return 1;
    if (scanf("%lf", &b) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    printf("Sum:        %f\n", a + b);
    printf("Difference: %f\n", a - b);
    printf("Product:    %f\n", a * b);
    if (b != 0.0) {
        printf("Quotient:   %f\n", a / b);
    } else {
        printf("Quotient:   Undefined (division by zero)\n");
    }

    return 0;
}