#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter Value Of A,B,C: ");

    // Ax^2+Bx+C=0

    scanf("%d %d %d", &A, &B, &C);

    float D, root1, root2;

    D = (B * B) - (4 * A * C);
    if (D >= 0) {
        root1 = (-B + D) / (2 * A);

        root2 = (-B - D) / (2 * A);
        printf("The Roots are %f And %f\n", root1, root2);
    } else {
        printf("It Has No REAL roots \n");
    }
}
