#include <math.h>
#include <stdio.h>

int main(void) {

    char num[100];
    int digit, arm = 0, i = 0;
    printf("");
    scanf("%s", num);

    for (; num[i] != '\0'; i++) {
    }

    for (int wi = 0; num[wi] != '\0'; wi++) {
        digit = num[wi] - '0';
        arm += pow(digit, i);
    }

    if (num == arm) {
    }

    printf("%d %d\n", i, arm);
}
