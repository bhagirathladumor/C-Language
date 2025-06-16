#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,};
  printf("Odd elements: ");
  for (int i = 0; i < 15; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }
}