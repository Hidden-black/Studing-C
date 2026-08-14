#include <stdio.h>

int main() {

    signed int var;
    printf("Enter a number: ");
    scanf("%d", &var);

    if (var % 2 == 0) {
        printf("The number is Even\n");
        return 0;
    } else {
        printf("The number is Odd\n");
        return 0;
    }
}
