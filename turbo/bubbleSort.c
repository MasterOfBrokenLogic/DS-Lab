#include <stdio.h>
#include <conio.h>

void bubble_sort(int a[], int n);

void main() {
    int a[50], n, i;

    clrscr();

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    bubble_sort(a, n);

    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    getch();
}

void bubble_sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
