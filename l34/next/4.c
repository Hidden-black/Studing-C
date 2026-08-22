#include <stdio.h>

int main() {
    int Choice;
    float a, b;

    printf("---Calculator For Two Variables---");
    printf("1. Addition\n2. Substraction\n3. Multiplication \n4. Division");
    scanf("%d", &Choice);
    printf("Enter the two Variables: ");
    scanf("%f %f", &a, &b);

    switch (Choice) {
    case 1:
        printf("The Addition of %.2f and %.2f = %.2f\n", a, b, a + b);

    case 2:
        printf("The Substraction of %.2f from %.2f = %.2f\n", b, a, a - b);
        break;

    case 3:
        printf("The Multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
        break;

    case 4:
        printf("The Division of %.2f by %.2f is %.2f", a, b, a / b);
        break;
    default:
        printf("Please Enter The Correct Choice\n");
        break;
    }
    return 0;
}
