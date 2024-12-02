#include <stdio.h>

int main() {
    int a = 3, b = 5;
    int matrix[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };
    int sum = 0;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

