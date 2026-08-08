#include <stdio.h>

int main() {
  int time, thrs, tmin;
  printf("Enter the time in Sec: ");
  scanf("%d", &time);

  thrs = time / 3600;
  tmin = (time - (thrs * 3600)) / 60;

  printf("%d hrs %d min %d sec\n", thrs, tmin, time % 60);

  return 0;
}
