#include <stdio.h>

/*
Function to take a input in sec and
covert it into hrs, min and sec
*/

int main(void) {

  int time, tmin, div = 3600, tsec;
  float thrs;

  printf("Enter the time in sec: ");
  scanf("%d", &time);

  thrs = 0;
  tmin = time / 60;

  while (tmin > 59) {
    tmin = tmin - 60;
    thrs++;
  }

  printf("%2.f hrs, %d min, %d sec\n", thrs, tmin, time % 60);
  return 0;
}
