#include <stdio.h>
#define SIZE 20
int linear(int a[SIZE], int n, int data);

int main(){
    int a[SIZE], n, i, data, position;
    printf("Enter the number of elements: ");
        scanf("%d", &n);

    printf("Enter elements: ");
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

    printf("Enter element to be searched: ");
        scanf("%d", &data);

    printf("Given array is: ");
        for(i = 0; i < n; i++){
            printf("%d ", a[i]);
        }

    printf("\nElement to be searched is: %d\n", data);

    position = linear(a, n, data);

    if(position == -1){
        printf("Search is unsuccessful.\n");
        printf("%d is not found in the array.\n", data);
    } else {
        printf("Search is successful.\n");
        printf("%d found at position %d.\n", data, position);
    }

    return 0;
}

int linear(int a[], int n, int data){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == data){
            return i;
        }
    }
    return -1;
}