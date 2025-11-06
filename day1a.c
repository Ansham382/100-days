#include <stdio.h>

int main(void) {
    double a, b;
    printf("Enter first number: ");
    if (scanf("%lf", &a) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Enter second number: ");
    if (scanf("%lf", &b) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }
    printf("Sum: %f\n", a + b);
    return 0;
}