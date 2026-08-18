#include <stdio.h>

// typecasting
//

int main() {
    int x;
    float y;
    x = 1;
    y = (float)x;

    printf("%d %f\n", x, y);
    printf("%9lf\n", 22.0f / 7.0f);

    int a = 42;
    char b = (char)a;

    printf("%c\n", b);
}
