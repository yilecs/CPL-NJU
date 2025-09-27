#include <stdio.h>

#define M 5

int main() {
    int a[M] = {0};

    for (int i = 0; i<M; i++) {
        a[i] += 1;

        for (int i = 0; i<M; i++) {
            printf("%d ", a[i]);
        }

        printf("\n");
    }

    return 0;
}
