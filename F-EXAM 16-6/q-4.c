#include <stdio.h>

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,};
  int *p = arr;
  printf("Even elements: ");
  for (int i = 0; i < 15; i++) {
    if (p[i] % 2 == 0) {
      printf("%d ", p[i]);
    }
  }
}