#include <stdio.h>
int main(){
    int a[100], pos, n, num, i;

    printf("Enter the number of array elements: ");
        scanf("%d", &n);

    printf("Enter the number of array elements: ");
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

    printf("Enter the number to be inserted: ");
        scanf("%d", &num);

    printf("Enter the position to insert: ");
        scanf("%d", &pos);

    for(i = n; i >= pos; i--){
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;
    n++;

    printf("New array is: ");
        for(i = 0; i < n; i++){
            printf("%d\t", a[i]);
        } 

    return 0;
}