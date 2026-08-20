#include <stdio.h>

// typecasting
//

int main() {
    int x;
    float y;
    x = 1;
    y = (float)x;

    printf("%d %f\n", x, y);
    printf("%9lf\n", 22.0 / 7.0);

    //    int a = 42;
    //    char b = (char)a;

    //    printf("%c\n", b);
    int a = 20;
    int b = 5;
    if (a == 10 + 15 && b < 10) {
        printf("True: %d %d\n", a, b);
    } else {
        printf("False: %d %d\n", a, b);
        return 0;
    }

    int K, num;
}
