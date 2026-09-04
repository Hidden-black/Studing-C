#include <stdio.h>

int main(void) {
    int num[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d \t", num[i]);
    }

    printf("\n");
}
