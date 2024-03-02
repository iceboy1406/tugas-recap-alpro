#include <stdio.h>

int main() {
  int n;
  // Input number of element of array
  scanf("%d", &n);

  int numbers[n];
  // Input array values
  for (int i = 0; i < n; i++) {
    scanf("%d", &numbers[i]);
  }

  // Sum all numbers in array
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += numbers[i];
  }

  printf("Total : %d\n", total);
  return 0;
}