#include <stdio.h>
#include <conio.h>

void insertion_sort(int a[], int n);

void main() {
    int a[50], n, i;

    clrscr();

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    insertion_sort(a, n);

    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    getch();
}

void insertion_sort(int a[], int n) {
    int key, j;

    for (int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = key;
    }
}
