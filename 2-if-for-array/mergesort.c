#include <stdio.h>

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {2, 3, 7, 8, 10};

  int lena = sizeof(a) / sizeof(int);
  int lenb = sizeof(b) / sizeof(int);

  int i = 0;
  int j = 0;

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
}
