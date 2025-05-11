#include <stdio.h>
#include <conio.h>

int main(){
    int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    clrscr();

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            result[i][j] = 0;
            for(int k = 0; k < 3; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result of the matrix multiplication: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
