#include <stdio.h>

int main() {
    static int i = 0;

    for (int j = 10; i < j; j--) {
        printf("test\n");
    }
}
