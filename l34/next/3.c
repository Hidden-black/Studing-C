#include <stdio.h>

int main() {
    int Choice;
    printf("Enter the day number: ");
    scanf("%d", &Choice);

    switch (Choice) {
    case 1:
        printf("Sunday\n");
        break;

    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thurday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    case 7:
        printf("Saturday\n");
        break;
    default:
        printf("Please Enter A Single number! \n");
    }
}
