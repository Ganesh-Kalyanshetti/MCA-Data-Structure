#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {
    int i = start;      // Start of left half
    int j = mid + 1;    // Start of right half
    int k = 0;

    int temp[end - start + 1];  // Temp array to store merged values

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy remaining elements
    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    // Copy sorted temp array back to original array
    for (i = start, k = 0; i <= end; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);       // Left half
        mergeSort(arr, mid + 1, end);     // Right half

        merge(arr, start, mid, end);      // Merge them
    }
}

int main() {
    int arr[] = {12, 7, 3, 9, 14, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
