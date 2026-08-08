#include <stdio.h>

int main() {
  int a, b;
  printf("Enter The Numbers To Swap: ");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("The swapped the numners are %d and %d\n", a, b);
  return 0;
}
