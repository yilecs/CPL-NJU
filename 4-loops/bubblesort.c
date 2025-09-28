#include <stdbool.h>
#include <stdio.h>

#define MAX 20

int main() {
    int num[MAX] = {0};
    int len = -1;

    // enter the array
    while (scanf("%d", &num[++len]) != EOF)
        ;

    // display the array
    for (int i = 0; i < len; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    // bubblesort
    for (int i = 0; i < len - 1; i++) {
        // move the largest to the location len - i - 1
        bool has_swap = false;
        for (int j = 0; j < len - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                int tmp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = tmp;
                has_swap = true;
            }
        }

        // display
        for (int k = 0; k < len; k++) {
            if (k == len - i - 1) {
                printf("\033[47;31m%d\033[0m ", num[k]);
            } else {
                printf("%d ", num[k]);
            }
        }
        printf("\n");

        if (!has_swap) {
            break;
        }
    }

    return 0;
}
