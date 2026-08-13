#include <stdio.h>

int main() {
    // int a = 10;
    static int a = 10;
    ++a;
    printf("%d\n", a);
    printf("%d\n", a);
    printf("%d\n", a);
    return 1;
}
