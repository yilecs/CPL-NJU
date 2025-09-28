#include <stdio.h>

#define LEN 10
int dictionary[LEN] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };

int main() {
    int key = 0;
    scanf("%d", &key);

    int low = 0;
    int high = LEN - 1;

    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (dictionary[mid] > key) {
            high = mid - 1;
        } else if (dictionary[mid] < key) {
            low = mid + 1;
        } else {
            index = mid;
            break;
        }
    }

    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("index = %d\n", index);
        printf("key = %d\n", key);
        printf("dictionary[index] = %d\n", dictionary[index]);
    }

    return 0;
}
