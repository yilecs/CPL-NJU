#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int CompareInt(const void *, const void *);
void PrintInt(const int *, size_t);

int main() {
 int integers[] = {-2, 99, 0, -743, 2, INT_MIN, 4};   
 size_t count = sizeof(integers) / sizeof(integers[0]);
 qsort(integers, count, sizeof(integers[0]), CompareInt);
 PrintInt(integers, count);

 return 0;
}

void PrintInt(const int *integers, size_t len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", integers[i]);
    }

    printf("\n");
}

int CompareInt(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;

    return (int_a > int_b) - (int_a < int_b);
}
