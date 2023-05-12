#include <stdio.h>

int checkBit(int number, int bitPosition);

int main() {
    int number, bitPosition;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position (0-31): ");
    scanf("%d", &bitPosition);

    int bitValue = checkBit(number, bitPosition);

    printf("Bit value at position %d: %d\n", bitPosition, bitValue);

    return 0;
}

int checkBit(int number, int bitPosition) {
    int mask = 1 << bitPosition;
    int result = (number & mask) >> bitPosition;

    return result;
}
