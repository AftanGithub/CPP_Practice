
#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int arr[], int n, int *swaps, int *comparisons) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Count the comparison
        (*comparisons)++;

        while (j >= 0 && arr[j] > key) {
            // Count the swap
            (*swaps)++;
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {10, 25, 86, 1, 16, 95, 37, 56, 5, 15, 20, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps = 0;
    int comparisons = 0;

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n, &swaps, &comparisons);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of comparisons: %d\n", comparisons);
    printf("Number of swaps: %d\n", swaps);

    return 0;
}
