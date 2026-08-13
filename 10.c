#include <stdio.h>

int main() {

    int num, mod, divider = 2;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("The Number is not Prime");
    } else {
        while (num > divider) {
            mod = num % divider;
            divider++;
            if (mod == 0) {
                printf("The Number Is Not Prime\n");
                return 0;
            }
        };
        printf("The Number Is Prime\n");
    };
    return 0;
}
