#include <stdio.h>

int main(void) {
    int num[10], max = 0, min = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    max = min = num[0];

    for (int i = 0; i < 10; i++) {
        if (num[i] > max) {
            max = num[i];
        } else if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Min: %d \t Max: %d\n", min, max);
}
