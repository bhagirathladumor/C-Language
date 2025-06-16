#include <stdio.h>

void main()
 {
  int arr[50][50] = {{5, 6}, {3, 5}};
  int sum = 0;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      sum += arr[i][j];
    }
  }
  float avg = (float)sum / 4;
  printf("Average: %.2f", avg);
}