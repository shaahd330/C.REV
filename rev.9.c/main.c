
#include <stdio.h>

void findMinMax(const int *arr, int size, int *min, int *max);

int main() {
    int arr[] = {8, 2, 10, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

void findMinMax(const int *arr, int size, int *min, int *max) {
    int i;

    *min = *max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
