#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 5


void PrintStr(char *str[], int len);
int CompareString(const void *, const void *);

int main(void) {
    char *str[LEN] = {"chensai", "yanzhuoran", "jiaoxuwang", "qishijie", "liudi"};
    PrintStr(str, LEN);
    qsort(str, LEN, sizeof(char *), CompareString);
    PrintStr(str, LEN);

    return 0;

}

void PrintStr(char *str[], int len) {
    for(int i = 0; i<len; i++) {
        printf("%s ", str[i]);
    }
    printf("\n");
}

int CompareString(const void *str1, const void *str2) {
    return strcmp(*(const char **)str1, *(const char **)str2);
}
