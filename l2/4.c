#include <stdio.h>

int main(void) {
  float mmdis;
  printf("Enter distance in mm: ");
  scanf("%f", &mmdis);

  printf("Distance in cm: %f\nDisctance in inch: %f\nDistance in feet: %f\n",
         mmdis / 10, mmdis / 25.4, mmdis / 304.8);
  return 0;
}
