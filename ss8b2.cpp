#include <stdio.h>

int main() {
    int arr[] = {3, 7, 12, 19, 21, 35};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int number, vitri = -1;
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &number);
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            vitri = i; 
            break;
        }
    }
    if (vitri != -1) {
        printf("Vi tri trong mang la: %d\n", vitri);
    } else {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

