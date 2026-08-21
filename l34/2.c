#include <stdio.h>

int main() {
    int Year;
    printf("Enter A Year: ");
    scanf("%d", &Year);

    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
        printf("It is A Leap Year \n");
    } else {
        printf("It is not A leap Year\n");
    }
}
