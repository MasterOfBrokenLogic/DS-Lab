#include <stdio.h>

void bubble_sort(int a[], int n);

void main() {
    int a[50], n;

    printf("Enter the size of the array: ");
        scanf("%d", &n);

    printf("Enter the elements:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

    bubble_sort(a, n);

    printf("The sorted array is:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }

    printf("\n");
}

void bubble_sort(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
