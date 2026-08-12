#include <stdio.h>

int main() {
  // Logical Operators

  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if (a == b && c != d || a == d) {
    printf("A is equal to b and c is not equal to d or a is equal to d\n");
  }
}
