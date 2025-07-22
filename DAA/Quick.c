#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        if(a[j] < pivot) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quicksort(int a[], int low, int high) {
    if(low < high) {
        int pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }

    printf("\nUnsorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    clock_t start = clock();
    quicksort(a, 0, n - 1);
    clock_t end = clock();

    printf("\n\nSorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n\nTime taken: %.6f seconds\n", time_taken);

    return 0;
}
