#include <stdio.h>

int main() {
  //  Swaping Two numbers using a third variable
  int a, b, c;
  printf("Enter Two Numbers to swap: ");
  scanf("%d %d", &a, &b);
  c = a;
  a = b;
  b = c;
  printf("The Numbers Are %d and %d\n", a, b);
  return 0;  
}
