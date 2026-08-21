#include <stdio.h>

int bur() {
    printf("Test\n");
    return 0;
};

int main() {
    int var = 5, vari;
    scanf("%d", &vari);

    if (vari > var) {
        bur();
    }

    printf("Weee\n");
}
