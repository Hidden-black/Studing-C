#include <stdio.h>

struct Matrix {
    int row1[3];
    int row2[3];
    int row3[3];
};

int main() {

    struct Matrix value[1];

    printf("Enter value of a11: ");
    scanf("%d", &value[0].row1[0]);
    printf("Enter value of a12: ");
    scanf("%d", &value[0].row1[1]);
    printf("Enter value of a13: ");
    scanf("%d", &value[0].row1[2]);
    printf("Enter value of a21: ");
    scanf("%d", &value[0].row2[0]);
    printf("Enter value of a22: ");
    scanf("%d", &value[0].row2[1]);
    printf("Enter value of a23: ");
    scanf("%d", &value[0].row2[2]);
    printf("Enter value of a31: ");
    scanf("%d", &value[0].row3[0]);
    printf("Enter value of a32: ");
    scanf("%d", &value[0].row3[1]);
    printf("Enter value of a33: ");
    scanf("%d", &value[0].row3[2]);

    printf("\n\n");
    printf("%d %d %d\n", value[0].row1[0], value[0].row1[1], value[0].row1[2]);
    printf("%d %d %d\n", value[0].row2[0], value[0].row2[1], value[0].row2[2]);
    printf("%d %d %d\n", value[0].row3[0], value[0].row3[1], value[0].row3[2]);

    printf("\n\n Sum Of All Values: %d\n\n",
           value[0].row1[0] + value[0].row1[1] + value[0].row1[2] +
               value[0].row2[0] + value[0].row2[1] + value[0].row2[2] +
               value[0].row3[0] + value[0].row3[1] + value[0].row3[2]);

    return 0;
}
