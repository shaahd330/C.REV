#include <stdio.h>

int binaryToDecimal(long long binary);

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal number: %d\n", decimal);

    return 0;
}

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int base = 1;

    while (binary != 0) {
        int digit = binary % 10;
        decimal += digit * base;
        binary /= 10;
        base *= 2;
    }

    return decimal;
}
