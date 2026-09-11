#include <stdio.h>

int main() {
    printf("Size: ");
    int m, n, o, p;
    scanf("%d %d %d %d", &m, &n, &o, &p);
    int arr[m][n], arr2[o][p];
    if (n != o) {
        return 0;
    }

    printf("First Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Second Matrix:\n");
    for (int i = 0; i < o; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    int res[m][p];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                res[i][j] = 0;
                res[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    printf("\n\nAxB\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }
}
