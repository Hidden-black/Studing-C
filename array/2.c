#include <stdio.h>

int main() {

    int a[] = {2, 3, 4, 2, 5,  6,   2,  6,  7,  4, 7,
               3, 9, 7, 5, 43, 787, 33, 22, 44, 55};
    int b[10001];

    for (int i = 0; i < 10000; i++) {
        b[i - 1] = i;
    }

    int low = b[0], high = sizeof(b) / sizeof(b[0]);
    int mid = high / 2, to_find = 30;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (b[mid] == to_find) {
            printf("EEEEEEE %d %d %d\n%d\n", mid, high, low, b[mid]);
            return 0;
        } else if (b[mid] < to_find) {
            low = mid + 1;
            printf("mid < find\n");
        } else if (b[mid] > to_find) {
            high = mid - 1;
            printf("high < to_find\n");
        } else {
            printf("not here\n");
        }
    }
    printf(" not here;\n");

    //    printf("%d\n%d\n%d\n", high, low, mid);
}
