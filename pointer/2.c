#include <stdio.h>
#define N 10

void minmax(int a[], int n, int *max, int *min) {
    *max = *min = a[0];
    for (int i = 0; i < N; i++) {
        if (*max < a[i]) {
            *max = a[i];
        }
        if (*min > a[i]) {
            *min = a[i];
        }
    }
};

int main() {
    int b[N], big, small;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &b[i]);
    }
    minmax(b, N, &big, &small);

    printf("Largest: %d\nSmallest: %d\n", big, small);
    for (int i = 0; i < N; i++) {
        printf("%d  ", b[i]);
    }
    printf("\n");
    return 0;
}
