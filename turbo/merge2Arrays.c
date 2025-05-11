#include <stdio.h>
#include <conio.h>

void merge2Arrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i, j;
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        result[n1 + j] = arr2[j];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[n1 + n2];

    clrscr();
    
    merge2Arrays(arr1, n1, arr2, n2, result);

    printf("Merged array: ");
    printArray(result, n1 + n2);

    getch();
}
