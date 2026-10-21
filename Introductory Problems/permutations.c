#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  int x = n / 2, y = n;
  int a[n];
  a[0] = y - 1;
  a[2] = y;
  y = y - 2;
  if (n == 1) {
    printf("%d", n);
    return 0;
  }
  if (n == 2 || n == 3) {
    printf("NO SOLUTION");
    return 0;
  }
  if (n == 4) {
    a[0] = 3;
    a[1] = 1;
    a[2] = 4;
    a[3] = 2;
  } else {
    for (int i = 0; i < n; i++) {
      if (i % 2 == 1) {
        a[i] = x;
        x--;
      } else if (i > 2) {
        a[i] = y;
        y--;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}
