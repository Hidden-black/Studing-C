#include <stdio.h>

int main() {

  int a, b, c, d;
  printf(": ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (a >= b || c == d) {
    printf("Hmmm\n");
  } else {
    printf("Dem\n");
  }
  return 0;
}
