#include <stdio.h>

int main() {

    int arr[10] = {9, 2, 3, 6, 7, 8, 10, 21, 12, 80};

    // 冒泡排序
    for (int i = 0; i < 10; i ++) {
        for (int j = i + 1; j < 10; j ++) {
            if (arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int i = 0; i < 10; i ++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}