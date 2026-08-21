#include <stdio.h>

enum Test { v0 = 1, v1, v2, v3, v4 };

int main() {
    printf("Weee\n");

    enum Test i = v0;
    printf("%d %d %d %d\n", i, v1, v2, v3);

    // 2-D array

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("%d\n", a[0][0]);

    for (int i = 0, r = 0; i < 3; i++, r++) {
        for (int w = 0; w < 3; w++) {
            printf("%d\t", a[i][w]);
        }
        printf("\n");
    }
}
