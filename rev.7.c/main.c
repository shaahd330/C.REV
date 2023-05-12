#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int size, i;
    int countEven = 0, countOdd = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("Number of even elements: %d\n", countEven);
    printf("Number of odd elements: %d\n", countOdd);

    return 0;
}
