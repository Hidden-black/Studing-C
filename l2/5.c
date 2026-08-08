#include <math.h>
#include <stdio.h>

int main() {

  int x1, y1, x, y;
  float calc;
  printf("Enter the x1 coordinate: ");
  scanf("%d", &x);
  printf("Enter the y1 coordinate: ");
  scanf("%d", &y);
  printf("Enter the x2 coordinate: ");
  scanf("%d", &x1);
  printf("Enter the y2 coordinate: ");
  scanf("%d", &y1);

  calc = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
  printf("The distance between two points is %f units\n ", calc);

  return 0;
}
