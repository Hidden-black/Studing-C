#include <stdio.h>

int main() {
    int num, div;

    printf("Enter the Numer: ");
    scanf("%d", &num);

    printf("Enter the number to check multiplicity: ");
    scanf("%d", &div);

    if (num % div == 0) {
        printf("The %d is a Multiple of %d", num, div);
    } else {
        printf("%d is not the multiple of %d", num, div);
    }
}
