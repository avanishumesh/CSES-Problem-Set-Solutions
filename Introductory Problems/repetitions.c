#include <stdio.h>

int replena(char name[]) {

  int count = 1, temp = 0, i = 0;
  if (name[i] == '\0') {
    return 0;
  }
  do {

    if (name[i] == name[i + 1]) {
      temp++;
    } else {
      if (temp + 1 > count) {
        count = temp + 1;
      }
      temp = 0;
    }
    i++;
  } while (name[i] != '\0');
  return count;
}

int main() {
#define max 1000000
  char name[max];

  scanf("%1000000s", name);
  int x = replena(name);
  printf("%d", x);
}
