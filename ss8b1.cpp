#include <stdio.h>

int main() {
    int arr[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

