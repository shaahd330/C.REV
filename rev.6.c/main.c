#include <stdio.h>

int findMaximum(int a, int b, int c, int d);
int findMinimum(int a, int b, int c, int d);

int main() {
    int num1, num2, num3, num4;
    int maximum, minimum;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    maximum = findMaximum(num1, num2, num3, num4);
    minimum = findMinimum(num1, num2, num3, num4);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}

int findMaximum(int a, int b, int c, int d) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    return max;
}

int findMinimum(int a, int b, int c, int d) {
    int min = a;

    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }

    return min;
}
