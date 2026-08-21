#include <stdio.h>

int main() {
    int month;

    printf("Enter the Number of the Month: ");
    scanf("%d", &month);

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("The month has 30 days");
    } else if (month == 2) {
        int Year;
        printf("Enter A Year: ");
        scanf("%d", &Year);

        if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
            printf("The month has 29 days");
        } else {
            printf("The month has 28 days");
        }

    } else {
        printf("The month has 31 days.");
    }
}
