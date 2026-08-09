#include <stdio.h>
#define pi (22.0f / 7.0f)

int main() {
  float radius;

  printf("Enter the radius: ");
  scanf("%f", &radius);

  printf("Area of the circle is %2.f\n", pi * radius * radius);
}
