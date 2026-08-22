#include <stdio.h>
#define pi 22.0f / 7.0f
#include <math.h>

int main() {
    int Choice;
    printf("---Calculate Area Of---\n");
    printf("1. Circle\n2.Rectangle\n3.Triangle");

    float radius, a, b, c, s;
    switch (Choice) {
    case 1:
        printf("Enter the Radius: ");
        scanf("%f", &radius);
        printf("The Area Of Triangle is %f", pi * radius * radius);
        break;

    case 2:
        printf("Enter Side A and B");
        scanf("%f%f", &a, &b);
        printf("Area Of Rectangle is %f", a * b);
        break;

    case 3:
        printf("Enter the Three Sides of the Triangle: ");
        scanf("%f%f%f", &a, &b, &c);

        s = (a + b + c) / 2;

        if (a + b > c || b + c > a || c + a > b) {
            float area = sqrt(s * (s - a) * (s - b) * (s - c));
            printf("Area of the Triangle is %f\n", area);
        } else {
            printf("Dimentions Are not Of a Triangle\n");
        }

        break;

    default:
        printf("Please enter a correct choice!\n");
    }

    return 0;
}
