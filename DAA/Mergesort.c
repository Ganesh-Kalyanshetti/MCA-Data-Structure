#include <stdio.h>

void merge(int arr[], int start, int mid, int end) {
    int i = start;      
    int j = mid + 1;    
    int k = 0;

    int temp[end - start + 1];  

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

 
    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    
    for (i = start, k = 0; i <= end; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        mergeSort(arr, start, mid);       
        mergeSort(arr, mid + 1, end);     

        merge(arr, start, mid, end);      
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
