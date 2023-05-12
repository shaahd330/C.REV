#include <stdio.h>

int main() {
    char operator;
    double number1, number2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &number1, &number2);

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
