
#include <stdio.h>

int main() {
    long long number;
    int countZeros = 0;
    int countOnes = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    // Count zeros and ones
    while (number != 0) {
        int digit = number % 10;
        if (digit == 0) {
            countZeros++;
        } else if (digit == 1) {
            countOnes++;
        }
        number /= 10;
    }

    printf("Number of zeros: %d\n", countZeros);
    printf("Number of ones: %d\n", countOnes);

    return 0;
}
