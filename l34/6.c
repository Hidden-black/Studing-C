#include <stdio.h>

int main() {

    int Score;
    printf("Enter The Score (1-10): ");
    scanf("%d", &Score);

    if (Score < 3 && Score > -1) {
        printf("F Grade\n");
    } else if (Score < 5) {
        printf("D Grade\n");

    } else if (Score < 7) {
        printf("C Grade\n");

    } else if (Score < 9) {
        printf("B Grade\n");

    } else if (Score < 11) {
        printf("A Grade\n");
    } else {
        printf("Invalid input\n");
    }
}
