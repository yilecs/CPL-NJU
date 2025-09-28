#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 7, 8, 10, 11};
    int b[] = {2, 3, 7, 8, 10};

    int lena = sizeof(a) / sizeof(a[0]);
    int lenb = sizeof(b) / sizeof(b[0]);

    int i = 0, j = 0;
    while (i < lena && j < lenb) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    while (i < lena) {
        printf("%d ", a[i]);
        i++;
    }

    while (j < lenb) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}
