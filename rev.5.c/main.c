#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("Result: %.2lf\n", result);

    return 0;
}

double power(double base, int exponent) {
    double result = 1.0;
    int i;

    if (exponent > 0) {
        for (i = 1; i <= exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (i = 1; i <= -exponent; i++) {
            result /= base;
        }
    }

    return result;
}
