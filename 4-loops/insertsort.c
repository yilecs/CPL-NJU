#include <stdio.h>

int main() {
    int array[] = {13, 41, 51, 23, 11, 3, 6, 1, 34};
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < len; i++) {
        int insert = array[i];

        int j = i - 1;
        while (j >= 0 && array[j] > insert) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = insert;
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
