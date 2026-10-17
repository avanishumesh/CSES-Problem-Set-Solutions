#include <stdio.h>

long countcal(long arr[], long n) {
  long i = 0, count = 0;
  if (n == 0) {
    return 0;
  }
  while (i < n - 1) {
    if (arr[i + 1] < arr[i]) {
      count = arr[i] - arr[i + 1] + count;
      arr[i + 1] = arr[i];
    }
    i++;
  }

  return count;
}

int main() {
  long n, arr[200000];

  scanf("%ld", &n);
  for (int i = 0; i < n; i++) {
    scanf("%ld", &arr[i]);
  }

  long x = countcal(arr, n);
  printf("%ld", x);
}
