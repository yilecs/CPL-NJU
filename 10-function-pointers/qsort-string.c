#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CompareStrs(const void *left, const void *right);
void PrintStrs(const char *str[], size_t len);

int main() {
    const char *names[] = {
        "Luo Dayou", "Cui Jian", "Dou Wei", "Zhang Chu",   "Wan Qing",
        "Li Zhi",    "Yao",      "ZuoXiao", "ErShou Rose", "Hu Mage",
    };
    size_t count = sizeof(names) / sizeof(names[0]);

    qsort(names, count, sizeof(names[0]), CompareStrs);
    PrintStrs(names, count);

    return 0;
}

int CompareStrs(const void *left, const void *right) {
    return strcmp(*(char * const *)left, *(char * const *)right);
}

void PrintStrs(const char *str[], size_t len) {
    for (int i = 0; i < len; i++) {
        printf("%s ", str[i]);
    }
    printf("\n");
}
