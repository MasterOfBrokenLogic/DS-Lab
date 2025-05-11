#include <stdio.h>
#include <conio.h>

void selection_sort(int a[], int n);

void main() {
    int a[50], n, i;

    clrscr();

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(a, n);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    getch();
}

void selection_sort(int a[], int n) {
    int min, temp, j;

    for (int i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
